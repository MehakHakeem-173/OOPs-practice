#include<bits/stdc++.h>
using namespace std;

class Student{
    int rollNo;
    char* name;
    float GPA;


public:
    Student();
    Student(const char * aName);
    Student(const char * aName, int aRollNo);
    Student(const char * aName, int aRollNo, float aGPA);
};

Student::Student(){
    rollNo = 0;
    name = NULL;
    GPA = 0.0;
}

Student::Student(const char* aName){
    if(strlen(aName)>0){
        name = new char[strlen(aName)+1];
        strcpy(name, aName);
    }
    else{
        name = NULL;
    }
    
}

Student::Student(const char* aName, int aRollNo){
     if(strlen(aName)>0){
        name = new char[strlen(aName)+1];
        strcpy(name, aName);
    }
    else{
        name = NULL;
    }
    
    if(aRollNo<0){
        rollNo = 0;
    }
    else{
        rollNo = aRollNo;
    }
}

int main(){
    Student student1;
    Student student2("Name");
    Student student3("Name", 1);
    //Student student4("Name", 1, 4.0);
}