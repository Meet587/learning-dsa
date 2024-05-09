#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    // write your code here

    for (int i = 1; i < n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {2, 63, 8, 37, 56, 51, 48, 93, 12};

    insertionSort(arr, 9);
    for (int it : arr)
    {
        cout << it << " ";
    }

    return 0;
}