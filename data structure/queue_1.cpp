#include<iostream>
using namespace std;
//=====================Node class===================
class Node{
private:
    int data;
    Node* next;

public:
    Node(){
        next = NULL;
    }

    void set(int x){
        data = x;
    }

    int get(){
        return data;
    }

    void setNext(Node* p){
        next = p;
    }

    Node* getNext(){
        return next;
    }
};

//===================Queue class================
class Queue{
    private:
    Node* front;
    Node* rear;

    public:
    Queue(){
        front = rear = NULL;
    }

    //insert at rear
    void enqueue(int x){
        Node* newNode = new Node();

        newNode->set(x);
        newNode->setNext(NULL);

        //first node
        if(front == NULL){
            front = rear = newNode;
            return;
        }

        rear->setNext(newNode);
        rear = newNode;
    }

    //remove from front
    int dequeue(){
        if(front == NULL){
            cout << "Queue underflow\n";
            return -1;
        }

        int x = front->get();
        Node* p = front;

        front = front->getNext();
        delete p;

        //queue become empty
        if(front == NULL)
        rear = NULL;

        return x;
    }

    void display(){
        Node* temp = front;
        while(temp != NULL){
            cout << temp->get() << " ";
            temp= temp->getNext();
        }
        cout << endl;
    }
};

//===================main=====================

int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    cout << "Queue: ";
    q.display();

    cout << "remove: " << q.dequeue() << endl;

    cout << "Queue: ";
    q.display();

    return 0;
}
