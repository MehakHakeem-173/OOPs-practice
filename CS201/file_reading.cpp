#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int id;
    float salary;
    string name;
    ifstream myFile;
    myFile.open("mehak.txt");
    if(!myFile){
        cout << "\n\n file opening error";
    }
    else{
    myFile>>id>>name>>salary;
    while(!myFile.eof()){
        cout << "\n\n id: " << id<< "\tname: " << name << "\tsalary" << endl;
        myFile>>id>>name>>salary;
    }
}
}