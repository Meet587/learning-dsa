#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int L, int mid, int H)
{
    int left = L;
    int right = mid + 1;
    vector<int> temp;

    while (left <= mid && right <= H)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= H)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = L; i <= H; i++)
    {
        arr[i] = temp[i - L];
    }
}

void mergeSort(vector<int> &arr, int L, int H)
{
    if (L >= H)
        return;

    int mid = (L + H) / 2;

    mergeSort(arr, L, mid);
    mergeSort(arr, mid + 1, H);

    merge(arr, L, mid, H);
}

int main()
{
    // int arr[] = {2, 63, 8, 37, 56, 51, 48, 93, 12};

    vector<int> arr = {2, 63, 8, 37, 56, 51, 48, 93, 12};

    mergeSort(arr, 0, 9);

    for (int it : arr)
    {
        cout << it << " ";
    }
    cout << endl;

    cout<<pow(7,7)<<endl;

    return 0;
}