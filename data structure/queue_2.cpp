#include<iostream>
#include<fstream>
//#include "Customer.h"
#include <Queue>
#include<vector>
#include <array>
#include <iomanip>
#include<bits/stdc++.h>
using namespace std;

const int NUM_TELLERS = 4;

enum EventType{

    Arrival, 
    Departure

};

struct Customer{

    int customerNo;
    int arrivalTime;
    int transactionDuration;
    int queueIndex = -1;

};

struct Event{

    int eventTime;
    EventType type;
    Customer customer;

    bool operator>(const Event& other) const{
        return eventTime > other.eventTime;
    }
};

int main(){
    ifstream data("customer.dat");

    if(!data){
        cout << "Cannot open customer.dat\n";
        return 1;
    }

    //four teller queues
    queue<Customer> tellerQueues[NUM_TELLERS];

    //event list (Min Heap)
    priority_queue<Event, vector<Event>, greater<Event> > eventList;

    int customerNo = 0;
    int totalWaitTime = 0;
    int customerServed = 0;

    int hour, minute, duration;

    //-------------------------------
    //read all customer and creat arrival events
    //-------------------------------

    while(data >> hour >> minute >> duration){
        Customer c;

        customerNo++;
        c.customerNo = customerNo;
        c.arrivalTime = hour * 60 + minute;
        c.transactionDuration = duration;
        c.queueIndex = -1;

        Event e;

        e.eventTime = c.arrivalTime;
        e.type = Arrival;
        e.customer = c;
    }

    //---------------------------------
    //Simulation
    //---------------------------------

    while (!eventList.empty()){
        Event current = eventList.top();
        eventList.pop();

        Customer c = current.customer;

        //-----------------------------
        //Arrival Event
        //-----------------------------

        if(current.type == Arrival){
            int bestQueue = 0;
            int smallest = tellerQueues[0].size();

            for(int i=0; i<NUM_TELLERS; i++){
                if(tellerQueues[i].size() < smallest){
                    smallest = tellerQueues[i].size();
                    bestQueue = i;
                }
            }

            c.queueIndex = bestQueue;
            bool queueWasEmpty = tellerQueues[bestQueue].empty();
            tellerQueues[bestQueue].push(c);

            //if customer starts service immediately 

            if(queueWasEmpty){
                Event departure;

                departure.eventTime = 
                current.eventTime + c.transactionDuration;

                departure.type = Departure;
                departure.customer = c;

                eventList.push(departure);
            }
        }

        //-------------------------------------
        //Departure Event
        //-------------------------------------

        else{
            int qIndex = c.queueIndex;

            Customer served = tellerQueues[qIndex].front();
            tellerQueues[qIndex].pop();

            int wait = current.eventTime - served.arrivalTime;

            totalWaitTime += wait;
            customerServed++;

            //schedule next customer 
            if(!tellerQueues[qIndex].empty()){
                Customer next = tellerQueues[qIndex].front();
                Event departure;

                departure.eventTime = 
                current.eventTime + next.transactionDuration;

                departure.type = Departure;
                departure.customer = next;

                eventList.push(departure);
            }
        }
    }

    //-------------------------------------
    //result
    //-------------------------------------

    cout << "\n====== BANK SIMULATION ========\n";
    
    cout << "Customers Served: "
    << customerServed << endl;

    cout << "Total Wait Time : "
    << totalWaitTime << " minutes" << endl;

    cout << fixed << setprecision(2);

    cout << "Average Wait Time : " 
    << (double)totalWaitTime / customerServed
    << " minutes " << endl;

    return 0;
}