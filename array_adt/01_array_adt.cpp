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

void Append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length++] = x;
    }
}

void Insert(struct Array *arr, int index, int x)
{
    if (index >= 0 && arr->size >= index)
    {
        for (int i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    // int n, i;

    // printf("enter size on an array");
    // scanf("%d", &arr.size);
    // arr.A = (int *)malloc(arr.size * sizeof(int));
    // arr.length = 0;

    // printf("Enter number of elements.\n");
    // scanf("%d", &n);

    // printf("Enter all elements\n");
    // for (i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr.A[i]);
    // }
    // arr.length = n;

    Insert(&arr, 2, 10);
    // Append(&arr, 9);
    Display(arr);

    return 0;
}