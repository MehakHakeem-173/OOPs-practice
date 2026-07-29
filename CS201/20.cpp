#include<iostream>
using namespace std;

struct Structure{
    int id;
    float marks;
    string name;
};
int main(){
    Structure s;
  cout << "\n\n enter student id: "; 
  cin>>s.id;
  cout << "\n\n enter student marks: "; 
  cin>>s.marks;
  cout << "\n\n enter student name: "; 
  cin>>s.name;

  cout << "\n\n Student Id: " << s.id;
  cout << "\n\n Student name: " << s.name;
  cout << "\n\n Student marks: " <<s.marks;
  return 0;
}
