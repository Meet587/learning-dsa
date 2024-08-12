#include <stdio.h>
#include <stdlib.h>

void Insert(int A[], int n)
{
    int i = n, temp;
    temp = A[i];

    while (i > 1 && temp > A[i / 2])
    {
        A[i] = A[i / 2];
        i = i / 2;
    }
    A[i] = temp;
}

int main()
{
    int H[] = {0, 10, 20, 30, 25, 5, 40, 35};
    for (int i = 2; i <= 7; i++)
        Insert(H, i);

    return 0;
}