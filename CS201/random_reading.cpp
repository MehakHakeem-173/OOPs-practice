#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string str;
   fstream myFile;
   myFile.open("test.exe", ios::out);
   myFile<<"it is a test file. ";
   myFile.close();

   myFile.open("text.txt",ios::in);
   myFile.seekg(8,ios::beg);
   long position = myFile.tellg();
   cout << "\n\n Position " << position;
   getline(myFile,str);
   cout << "\n\n " << str;
   myFile.close();
   return 0;
    }