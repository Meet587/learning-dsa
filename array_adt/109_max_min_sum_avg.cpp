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

int Max(struct Array arr)
{
    int max = arr.A[0];
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.A[i] > max)
        {
            max = arr.A[i];
        }
    }
    return max;
}

int Min(struct Array arr)
{
    int min = arr.A[0];
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.A[i] < min)
        {
            min = arr.A[i];
        }
    }
    return min;
}

int Sum(struct Array arr)
{
    int sum = 0;
    for (int i = 0; i < arr.length; i++)
    {
        sum += arr.A[i];
    }
    return sum;
}

float Avg(struct Array arr)
{
    return Sum(arr) / arr.length;
}

int Get(struct Array arr, int index)
{
    if (index >= 0 && index <= arr.length)
        return arr.A[index];
    return -1;
}

void Set(struct Array *arr, int index, int key)
{
    if (index >= 0 && index <= arr->length)
        arr->A[index] = key;
}

int main()
{
    struct Array arr = {{2, 23, 40, 15, 86}, 10, 5};

    Display(arr);
    // Set(&arr, 2, 20);

    return 0;
}