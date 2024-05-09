#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5] = {2, 4, 6, 8, 10};

    // for (int i = 0; i < 5; i++)
    //     printf("%u \n", &A[i]);

    printf("  \n");

    // printf("%u \n", &A); // its represent the address
    // printf("%d \n", A);  // its represent the address
    // printf("%d \n", (A + 2));
    // printf("%d", *(A + 2));

    int *p;

    p = (int *)malloc(5 * sizeof(int));
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;

    // for (int i; i < 5; i++)
    //     printf("%d,", p[i]);

    int C[4][4];

    printf("%u \n", &C[2][0]);

    free(p);

    return 0;
}