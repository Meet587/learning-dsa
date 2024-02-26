#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, *q;

    p = (int *)malloc(5 * sizeof(int));

    p[0] = 1;
    p[1] = 3;
    p[2] = 5;
    p[3] = 7;
    p[4] = 9;

    // declaring new pointer array with increase size
    q = (int *)malloc(10 * sizeof(int));

    // asign old variable to new big size array
    for (int i = 0; i < 5; i++)
        q[i] = p[i];

    free(p);  // deleteing old small size array
    p = q;    // assigning big size array to small size array variable
    q = NULL; // nullify big size array

    for (int i = 0; i < 5; i++)
        printf("%d \n", p[i]);

    return 0;
}