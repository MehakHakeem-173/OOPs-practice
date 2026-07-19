#include<bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]){
    int count;
    if(argc < 2){
        cout << "Usage : program <count> [display]\n";
        return 1;
    }

    count = atoi(argv[1]);
    bool display = (argc == 3 && strcmp(argv[2], "display")==0);

    while(count >0){
        {
            if(display)
            cout << count << " "; 

            count--;
        }

        cout << "\a";
        return 0;
    }
}