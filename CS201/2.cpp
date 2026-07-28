#include<iostream>
#include<conio.h>//console
using namespace std;

int main(){
    int age1;
    int age2, age3, age4, age5, age6, age7, age8, age9, age10;

    float avg;
    cout << "enter the age of students: ";

    cin>>age1>>age2>>age3>>age4>>age5>>age6>>age7>>age8>>age9>>age10;

    (avg = age1 + age2 + age3 + age4 + age5 + age6 + age7 + age8 + age9 + age10);

    avg = avg/10;
    cout << avg;
    return 0;
}