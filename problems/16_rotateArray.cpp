#include <bits/stdc++.h>

using namespace std;

void rotate(vector<int> &nums, int k)
{

    vector<int> temp(nums.size());

    for (int i = 0; i < nums.size(); i++)
    {
        temp[(i + k) % nums.size()] = nums[i];
    }

    nums = temp;
}

int findDuplicate(vector<int> &arr)
{
    // Write your code here

    int temp[arr.size() + 1] = {0};

    for (int i = 0; i < arr.size() - 1; i++)
    {
        // cout << temp[arr[i] - 1] << endl;
        if (temp[arr[i]] == 1)
        {
            return i;
        }
        else
        {
            temp[arr[i]] = 1;
        }
    }

    for (int i = 0; i < arr.size() - 1; i++)
    {
        cout << temp[arr[i]] << endl;
    }
}

int main()
{
    int arr[] = {1, 5, 3, 4, 5, 6, 2};

    vector<int> nums(7);

    for (int i = 0; i < nums.size() - 1; i++)
    {
        nums.push_back(arr[i]);
    }

    // rotate(nums, 3);
    cout << findDuplicate(nums) << endl;

    for (int i = 0; i < nums.size() - 1; i++)
    {
        // cout << nums[i] << endl;
    }
    return 0;
}