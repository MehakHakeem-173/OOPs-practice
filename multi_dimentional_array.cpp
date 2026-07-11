#include<bits/stdc++.h>
using namespace std;

int main(){
    int multi [5][10];
    int *ptr = *multi;

    for(int i=0; i<5; i++){
        for(int j=0; j<10; j++){
            multi[i][j] = i*j;
        }
    }

    cout << "\n Array manipulated using indexing is : \n";
    for (int i=0; i<5; i++){
        for(int j=0; j<10; j++){
            cout << multi[i][j] <<" " << '\t';
        }

        cout << '\n';
    }

    cout << "\n Array manipulation using pointer is: \n";
    for(int i=0; i<50; i++, ptr++){
        cout << *ptr << '\t';
    



        if((i + 1) % 10 == 0)
            cout << '\n';
    }
}