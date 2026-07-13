#include<iostream>
//#include"Stack.h"
using namespace std;
#define MAXSTACKSIZE 50
template <class T>
class Stack{
    private:
    int top;
    T* nodes;

    public:
    Stack(){
        top = -1;
        nodes = new T[MAXSTACKSIZE];
    }

    ~Stack(){
        delete[] nodes;
    }

    int empty(){
        if(top <0){
            return 1;
        }
        return 0;
    }

    // Push an element onto the stack
    // Returns:
    // 1 -> Successfully inserted
    // 0 -> Stack Overflow
    int push(T& x){

        //check if there is space
        if (top < MAXSTACKSIZE-1){
            nodes[++top] =x;//increment top and store the value
            return 1;
        }
        cout << "stack overflow\n";
        return 0;
    }

    //remove and return the top element

    T pop(){
        T x; //temporary variable

        //check if the stack is not empty
        if(!empty()){
            x = nodes[top--];
            return x;
        }

        cout << "stack underfloe\n";
        return x; //return an undefined value if stach is empty
    }

    //return the top element without removing it
    T peek(){
        if(!empty()){
            return nodes[top];
        }

        cout << "stack is emty\n";

        return T(); // return default value of type T
    }
};


int main(){
    //creat stack of integer
    Stack<int> intStack;

    //creat a stake of character
    Stack<char> charStack;

    int x = 10; 
    int y = 20;

    char c = 'C';
    char d = 'D';

    //push integer
    intStack.push(x);
    intStack.push(y);

    cout << "integer Stack: "
    << intStack.pop() << ", "
    << intStack.pop() << endl;

    //push character

    charStack.push(c);
    charStack.push(d);

    cout << "Character Stack: "
    << charStack.pop() <<", "
     << charStack.pop() << endl;

     return 0;
}