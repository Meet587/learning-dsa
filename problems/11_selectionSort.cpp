#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>&arr) {
    // Write your code here.

    for(int j =0; j<= arr.size()-2; j++)
    {
        int min=j;
        for(int i =j; i<=arr.size()-1; i++)
        {
            if(arr[min]>arr[i])
            {
                min=i;
            }
        }
        swap(arr[j], arr[min]);
    }
}
int main()
{
    vector<int> arr = {2,63,8,37,56,51,48,63,12};

    selectionSort(arr);
    for(int it: arr)
    {
        cout<< it<< " ";
    }

    return 0;
}