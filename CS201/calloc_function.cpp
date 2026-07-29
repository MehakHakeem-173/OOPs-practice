#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
   int numberOfStudents, totalAges = 0, *ptr1, *ptr2;
   cout << "\n\n How many students ages you want ot store? ";
   cin>> numberOfStudents;
   ptr1 = (int *) malloc(numberOfStudents * sizeof(int));
   if(ptr1 == NULL){
    cout << "\n\nDynamic memory Not allocated ";
    return 1;
   }

   ptr2 = ptr1;
   for(int i=0; i<=numberOfStudents; i++){
    cout << "\n\n Enter age of student " << i <<  " : "; 
    cin >> *ptr2;
    totalAges = totalAges+*ptr2;
    ptr2++;
   }
   cout << "\n\n Average Age: " << totalAges/numberOfStudents;
   free(ptr1);
   ptr2 = NULL;
   return 0;
}