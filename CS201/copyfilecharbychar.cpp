#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");

    if(!inFile || !outFile){
        cout << "File error";
        return 1;
    }

    char ch;

    while((ch=inFile.get()) !=EOF){
        outFile.put(ch);
    }

    inFile.close();
    outFile.close();

    return 0;
}