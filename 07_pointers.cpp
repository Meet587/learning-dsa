#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// int main()
// {
//     int a = 10;
//     int *p;
//     p = &a;

//     cout << *p << endl;
//     cout << p << endl;
//     cout << a << endl;
//     return 0;
// }

// int main()
// {
//     int A[4] = {1, 2, 3, 4};
//     int *p;
//     p = A;
//     for (int i = 0; i < 4; i++)
//     {
//         cout << p[i] << endl;
//         // cout << A[i] << endl;
//     }

//     return 0;
// }
int main()
{

    int *p;

    // p = (int *)malloc(5 * sizeof(int)); // c language method for declaring array pointer in heapp

    p = new int[5]; // c++ language method for declaring array pointer in heapp

    p[0] = 12;
    p[1] = 13;
    p[2] = 14;
    p[3] = 15;
    p[4] = 16;

    for (int i = 0; i < 4; i++)
    {
        cout << p[i] << endl;
        // cout << A[i] << endl;
    }

    delete[] p; // c++ dealocating memory in heap
    free(p);    // c dealocating memory in heap
    return 0;
}