#include <bits/stdc++.h>
using namespace std;

void printMissing(vector<int> arr)
{
    int diff = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != diff)
        {
            while (diff < arr[i])
            {
                printf("%d \n", i + diff);
                cout << diff << " " << arr[i] << endl;
                diff++;
            }
        }
    }
}

int main()
{
    vector<int> arr = {5, 6, 7, 8, 9, 12, 15, 16, 17, 18, 19, 20};
    printMissing(arr);

    return 0;
}