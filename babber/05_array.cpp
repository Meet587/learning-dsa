#include <bits/stdc++.h>

using namespace std;

void reversArray(int arr[], int size)
{
    int l = 0;
    int h = 1;

    while (l < size && h < size)
    {
        swap(arr[l], arr[h]);
        l += 2;
        h += 2;
    }
}

int main()
{
    int arr[11] = {2, 5, 7, 45,  87, 9, 5, 6, 8, -4};
    // fill_n(arr, 5, 3);

    for (int i = 0; i < 11; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    reversArray(arr, 11);
    for (int i = 0; i < 11; i++)
    {
        cout << arr[i] << " ";
    }
}
