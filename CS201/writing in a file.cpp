#include<iostream>
#include<fstream>

using namespace std;

int main(){

    //output file stream object
    ofstream outfile;

    //file name
    char outputFileName[] = "myfileOut.txt";

    //text to write
    char outputText[] = "Welcome to vu";

    //open file in opened mode
    outfile.open(outputFileName, ios::out);

    //check if file open successfully
    if(!outfile){
        cout << "can't open file " << outputFileName << endl;
        return 1;
    }

    //write into file
    outfile << outputText;

    //close file
    outfile.close();
    return 0;
}