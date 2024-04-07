#include <stdio.h>
#include <stdlib.h>

struct Array
{
    // int *A;
    int A[10];
    int size;
    int length;
};

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d \n", arr.A[i]);
    }
}

void Merge(struct Array arr1, struct Array arr2)
{
    int i, j;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    
}

int main()
{
    struct Array arr1 = {{2, 13, 24, 35, 48}, 10, 5};
    struct Array arr2 = {{4, 11, 18, 31}, 10, 5};
    struct Array *arr3;

    Display(arr1);

    return 0;
}