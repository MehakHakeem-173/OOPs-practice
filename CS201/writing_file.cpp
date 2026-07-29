#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string msg = "Welcome to vu\n";
    ofstream myFile;
    myFile.open("mehak.txt", ios::app);
    myFile<<msg<<"\n";
    myFile.close();
    return 0;
}