#include <iostream>
#include <stdint.h>
using namespace std;

// below is call by value function.
int add(int a, int b) // called prototype or header or signature of the function
{                     // body is calleddefination or alaboration of function
    int sum = 0;
    sum = a + b;
    return sum;
}

int main()
{
    int y = add(10, 5);
    cout << y << endl;
    return 0;
}