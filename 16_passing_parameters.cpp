#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

// below if the call by address function
void swap(int *x, int *y)
{
    int temp = 0;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 10, b = 5;

    swap(&a, &b);

    cout << "a " << a << endl;
    cout << "b " << b << endl;

    return 0;
}

// below is call by refrence function
// void swap(int &x, int &y)
// {
//     int temp = 0;
//     temp = x;
//     x = y;
//     y = temp;
// }

// int main()
// {
//     int a = 10, b = 5;

//     swap(a, b);

//     cout << "a " << a << endl;
//     cout << "b " << b << endl;

//     return 0;
// }