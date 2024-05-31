#include <bits/stdc++.h>

using namespace std;

int print2largest(int arr[], int n)
{
    // code here
    int largest = INT32_MIN;
    int largest2 = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        if (largest < arr[i])
        {
            largest2 = largest;
            largest = arr[i];
        }
    }
    for (int i = n; i > 0; i--)
    {
        if ((largest2 < arr[i]) && (largest != arr[i]))
        {
            largest2 = arr[i];
        }
    }
    return largest2;
}

int main()
{
    int n = 6;
    int arr[] = {12, 35, 1, 10, 34, 1};
    cout << print2largest(arr, n) << endl;

    int n2 = 3;
    int arr2[] = {10, 5, 10};
    cout << print2largest(arr2, n2) << endl;

    int n3 = 38;
    int arr3[] = {62, 30, 28, 47, 42, 25, 41, 56, 27, 61, 45, 44, 34, 46, 35, 58, 36, 60, 29, 53, 55, 32, 31, 33, 59, 50, 51, 52, 37, 39, 38, 43, 49, 54, 57, 40, 26, 48};
    cout << print2largest(arr3, n3) << endl;
    // print2largest(arr3, n3);

    return 0;
}
