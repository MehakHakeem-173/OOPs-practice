#include<iostream>
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
    Stack<int> s;
    int a = 10; 
    int b = 20;
    int c = 30;

    s.push(a);
    s.push(b);
    s.push(c);

    cout << "top Element: " << s.peek() << endl;
    cout << "popped: " << s.pop() << endl;
    cout << "popped: " << s.pop() << endl;
    cout << "top Element: " << s.peek() << endl;
    return 0;

}