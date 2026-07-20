#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream inFile("myfile.txt");

    if(!inFile){
        cout << "can't find file ";
        return 1;
    }

    char line[100];
    while (inFile.getline(line, 100)){
        cout << line << endl;
    }

    inFile.close();
    return 0;
}