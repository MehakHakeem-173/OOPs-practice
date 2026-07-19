#include<iostream>
#include<cstdio>
#include<cctype>

using namespace std;

int main(){
char c;
    int lowerCase = 0;
    int upperCase = 0;
    int digits = 0;
    int whiteSpace = 0;
    int punctuation = 0;
    int others = 0;

    cout << "Enter the string: ";

    while ((c = getchar()) != '\n'){
        if(islower(c))
        lowerCase++;

        else if(isupper(c))
        upperCase++;

        else if(isdigit(c)) 
        digits++;

        else if (isspace(c))
        whiteSpace++;

        else if (ispunct(c))
        punctuation++;

        else
         others++;


    }

     cout << "\nLowercase letters = " << lowerCase << endl;
    cout << "Uppercase letters = " << upperCase << endl;
    cout << "Digits = " << digits << endl;
    cout << "White spaces = " << whiteSpace << endl;
    cout << "Punctuation marks = " << punctuation << endl;
    cout << "Others = " << others << endl;

} 