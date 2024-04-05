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

int BinarySearch(struct Array arr, int key)
{
    int l = 0, h = arr.length - 1;

    while (l <= h)
    {
        int mid = h + l / 2;
        if (arr.A[mid] == key)
        {
            return mid;
        }
        else if (key < arr.A[mid])
        {
            h = mid - 1;
        }
        else if (key > arr.A[mid])
        {
            l = mid - 1;
        }
    }

    return -1;
}

int RBinSearch(int a[], int l, int h, int key)
{
    if (l <= h)
    {
        int mid = h + l / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] < key)
        {
            return RBinSearch(a, mid + 1, h, key);
        }
        else
        {
            return RBinSearch(a, l, mid - 1, key);
        }
    }
    return -1;
}
int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};

    // printf("%d", BinarySearch(arr, 5));
    printf("%d", RBinSearch(arr.A, 0, arr.length, 6));

    // Display(arr);
    return 0;
}