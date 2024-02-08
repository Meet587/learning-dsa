#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int A[4] = {1, 2, 3, 4};
    int *p;
    p = A;
    cout << A[0] << endl;
    for (int i; i < 4; i++)
    {
        cout << p[i] << endl;
        cout << A[i] << endl;
    }

    return 0;
}