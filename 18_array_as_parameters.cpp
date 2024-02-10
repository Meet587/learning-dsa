#include <iostream>
using namespace std;

// void func(int *A, int n) // array always pass by address never by value or refrence;
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << A[i] << endl;
//     }
// }
// int main()
// {
//     int A[] = {2, 4, 7, 8, 3, 5};
//     int n = 5;

//     cout << sizeof(A) / sizeof(int) << endl;
//     func(A, n);
//     // for (int x : A)
//     //     cout << x << " ";
//     return 0;
// }

int *fun(int size)
{
    int *p;
    p = new int[size];

    for (int i = 0; i < size; i++)
    {
        p[i] = i + 1;
    }

    return p;
}

int main()
{
    int sz = 5;
    int *ptr;

    ptr = fun(sz);

    for (int i = 0; i < sz; i++)
        cout << ptr[i] << ' ';

    return 0;
}