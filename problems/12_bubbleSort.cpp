#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr, int n)
{
    // write your code here

    for (int i = n; i >= 0; i--)
    {
        int didSwap = 0;
        for (int j = 0; j < i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
    }
}

int main()
{
    vector<int> arr = {2, 63, 8, 37, 56, 51, 48, 63, 12};

    bubbleSort(arr, arr.size() - 1);
    for (int it : arr)
    {
        cout << it << " ";
    }

    return 0;
}