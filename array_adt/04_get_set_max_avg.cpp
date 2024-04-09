#include <stdio.h>
#include <stdlib.h>

struct Array
{
    // int *A;
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d \n", arr.A[i]);
    }
}



int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};

    // printf("%d", BinarySearch(arr, 5));
    // printf("%d", RBinSearch(arr.A, 0, arr.length, 6));

    // Display(arr);
    return 0;
}