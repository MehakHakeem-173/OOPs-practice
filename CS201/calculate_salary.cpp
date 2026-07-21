#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>

using namespace std;

int main(){
    ifstream inFile("salin.txt");
    ofstream outFile("salout.txt");

    if(!inFile || !outFile){
        cout <<"File error";
        return 1;
    }

    char line[100];
    char *token;

    int salary;
    int totalSalary=0;

    while(inFile.getline(line,100)){
        token=strtok(line, " ");

        token=strtok(NULL," ");

        salary=atoi(token);
        totalSalary+=salary;
    }

    outFile<<"the total salary = " << totalSalary;
    inFile.close();
    outFile.close();

    return 0;
}