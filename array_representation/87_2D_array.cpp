#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{

    int A[3][4] = {{1, 2, 3, 4}, {4, 5, 6, 7}, {8, 9, 10, 11}};

    int *B[3];
    int **C;

    B[0] = (int *)malloc(4 * sizeof(int));
    B[1] = (int *)malloc(4 * sizeof(int));
    B[2] = (int *)malloc(4 * sizeof(int));

    C = (int **)malloc(3 * sizeof(int *));
    C[0] = (int *)malloc(4 * sizeof(int));
    C[1] = (int *)malloc(4 * sizeof(int));
    C[2] = (int *)malloc(4 * sizeof(int));

    return 0;
}