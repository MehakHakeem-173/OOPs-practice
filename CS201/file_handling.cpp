#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int main(){

    //variables to store the data read from the file 
    char name[50];
    char salary[10];
    char department[30];

    //input file stream object

    ifstream inFile;

    //file name
    char inputFileName[] = "myfile.txt";

    //open the file
    inFile.open(inputFileName);

    //check wheather file open successfully

    if(!inFile)
    {
    cout << "can't open the file named " << inputFileName << endl;

    
    return 1;
    }

    while(inFile >> name >> salary >> department){
        cout << name <<"\t"
        << salary << "\t"
        << department << endl;

    }

    //close the file

    inFile.close();
    return 0;
}