#include <iostream>
#include <stdio.h>

using namespace std;

void TOH(int n, int A, int B, int C)
{
    if (n > 0)
    {
        TOH(n - 1, A, C, B);
        printf("(%d,%d) \n", A, C);
        TOH(n - 1, B, C, A);
    }
}

int main()
{
    TOH(4, 1, 2, 3);
    return 0;
}