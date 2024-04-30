#include <bits/stdc++.h>
using namespace std;

void printF(int ind, vector<int> &bs, int arr[], int n)
{
    if (ind == n)
    {
        for (auto it : bs)
        {
            cout << it << " ";
        }
        if (bs.size() == 0)
        {
            cout << "[]";
        }
        cout << endl;
        return;
    }

    printF(ind + 1, bs, arr, n);

    bs.push_back(arr[ind]);
    printF(ind + 1, bs, arr, n);
    bs.pop_back();
}

int main()
{
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> bs;

    printF(0, bs, arr, n);

    return 0;
}