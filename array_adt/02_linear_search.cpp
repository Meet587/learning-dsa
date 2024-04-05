#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

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

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearch(struct Array *arr, int x)
{

    // for (int i=0; i<arr.length;i++)
    for (auto i : arr->A)
    {
        if (arr->A[i] == x)
        {
            if (i != 0)
                swap(arr->A[i], arr->A[i - 1]);
            return i;
        }
    }
    return -1;
}
int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};

    printf("%d", LinearSearch(&arr, 4));

    Display(arr);
    return 0;
}