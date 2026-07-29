#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //seekg() go to specific position
    //tellg() return current position value in long

    //seekp() go to specific positon in file to write
    //tellp()

    fstream myFile;
    myFile.open("mehak.txt", ios::out);
    myFile.write("It is a test file.", 18);
    long position = myFile.tellp();
    cout << "\n\n position: " << position;
    myFile.seekp(position-5, ios::beg); //13
    myFile.write(" just", 5);
    myFile.close();

    }