#include <iostream>
using namespace std;

template <class T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    cout << add(5, 7) << endl;
    cout << add(2.5, 4.8) << endl;
    cout << add('A', 'B') << endl;

    return 0;
}