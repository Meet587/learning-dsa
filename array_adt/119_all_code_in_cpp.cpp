#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Array
{
private:
    int *A;
    int length;
    int size;
    void swap(int *x, int *y)
    {
        int temp;
        temp = *x;
        *x = *y;
        *y = temp;
    };

public:
    Array()
    {
        size = 10;
        length = 10;
        A = new int[size];
    }
    Array(int sz)
    {
        size = sz;
        length = 0;
        A = new int[size];
    }
    ~Array()
    {
        delete[] A;
    }

    void Display();
    void Append(int x);
    void Insert(int index, int x);

    int LinearSearch(int key);
    int BinarySearch(int key);
    int Get(int index);
    void Set(int index, int x);
    int Max();
    int Min();
    int Sum();
    float Avg();
    void Reverse();
    void Reverse2();
    void InsertSort(int x);
    int isSorted();
    void Rearrange();

    Array *Marge(Array arr2)
    {
        int i, j, k;
        i = j = k = 0;
        Array *arr3 = new Array(length + arr2.length);
        while (i < length && j < arr2.length)
        {
            if (A[i] < arr2.A[j])
                arr3->A[k++] = A[i++];
            else
                arr3->A[k++] = arr2.A[j++];
        }

        for (; i < length; i++)
        {
            arr3->A[k++] = A[i];
        }

        for (; j < arr2.length; j++)
        {
            arr3->A[k++] = arr2.A[j];
        }
        arr3->length = length + arr2.length;
        arr3->size = 10;

        return arr3;
    };

    Array *Union(Array arr2)
    {
        int i, j, k;
        i = j = k = 0;
        struct Array *arr3 = new Array(length + arr2.length);
        while (i < length && j < arr2.length)
        {
            if (A[i] < arr2.A[j])
                arr3->A[k++] = A[i++];
            else if (A[i] > arr2.A[j])
                arr3->A[k++] = arr2.A[j++];
            else
            {
                arr3->A[k++] = A[i++];
                j++;
            }
        }

        for (; i < length; i++)
        {
            arr3->A[k++] = A[i];
        }

        for (; j < arr2.length; j++)
        {
            arr3->A[k++] = arr2.A[j];
        }
        arr3->length = k;
        arr3->size = 10;

        return arr3;
    };

    Array *InterSection(Array arr2)
    {
        int i, j, k;
        i = j = k = 0;
        struct Array *arr3 = new Array(length + arr2.length);
        while (i < length && j < arr2.length)
        {
            if (A[i] < arr2.A[j])
                i++;
            else if (A[i] > arr2.A[j])
                j++;
            else if (A[i] == arr2.A[j])
            {
                arr3->A[k++] = A[i++];
                j++;
            }
        }

        arr3->length = k;
        arr3->size = 10;

        return arr3;
    };

    Array *Difference(Array arr2)
    {
        int i, j, k;
        i = j = k = 0;
        struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
        while (i < length && j < arr2.length)
        {
            if (A[i] < arr2.A[j])
                arr3->A[k++] = A[i++];
            else if (A[i] > arr2.A[j])
                j++;
            else
            {
                i++;
                j++;
            }
        }

        for (; i < length; i++)
        {
            arr3->A[k++] = A[i];
        }

        arr3->length = k;
        arr3->size = 10;

        return arr3;
    };
};

void Array::Display()
{
    int i;
    printf("\nElements are\n");
    for (i = 0; i < length; i++)
    {
        printf("%d \n", A[i]);
    }
}

void Array::Append(int x)
{
    if (length < size)
    {
        A[length++] = x;
    }
}

void Array::Insert(int index, int x)
{
    if (index >= 0 && size >= index)
    {
        for (int i = length; i > index; i--)
        {
            A[i] = A[i - 1];
        }
        A[index] = x;
        length++;
    }
}

int Array::LinearSearch(int x)
{
    // for (auto i : length)
    for (int i = 0; i < length; i++)
    {
        if (A[i] == x)
        {
            if (i != 0)
                swap(&A[i], &A[i - 1]);
            return i;
        }
    }
    return -1;
}

int Array::BinarySearch(int key)
{
    int l = 0, h = length - 1;

    while (l <= h)
    {
        int mid = h + l / 2;
        if (A[mid] == key)
        {
            return mid;
        }
        else if (key < A[mid])
        {
            h = mid - 1;
        }
        else if (key > A[mid])
        {
            l = mid - 1;
        }
    }

    return -1;
}

int Array::Max()
{
    int max = A[0];
    for (int i = 1; i < length; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}

int Array::Min()
{
    int min = A[0];
    for (int i = 1; i < length; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    return min;
}

int Array::Sum()
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += A[i];
    }
    return sum;
}

float Array::Avg()
{
    return Sum() / length;
}

int Array::Get(int index)
{
    if (index >= 0 && index <= length)
        return A[index];
    return -1;
}

void Array::Set(int index, int key)
{
    if (index >= 0 && index <= length)
        A[index] = key;
}

void Array::Reverse()
{
    int *B;
    int i, j;

    B = (int *)malloc(length * sizeof(int));

    for (i = length - 1, j = 0; i >= 0; i--, j++)
    {
        B[j] = A[i];
    }
    for (i = 0; i < length; i++)
    {
        A[i] = B[i];
    }
}

void Array::Reverse2()
{
    int i, j;
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        swap(&A[i], &A[j]);
    }
}

void Array::InsertSort(int x)
{
    int i = length - 1;

    if (length == size)
    {
        return;
    }

    while (i >= 0 && x < A[i])
    {
        A[i + 1] = A[i];
        i--;
    }
    A[i + 1] = x;
    length++;
}

int Array::isSorted()
{
    for (int i = 0; i < length - 1; i++)
    {
        if (A[i] > A[i + 1])
        {
            return 0;
        }
    }
    return 1;
}

void Array::Rearrange()
{
    int i, j;
    i = 0;
    j = length - 1;
    while (i < j)
    {
        while (A[i] < 0)
        {
            i++;
        }
        while (A[i] > 0)
        {
            j--;
        }
        if (i < j)
            swap(&A[i], &A[j]);
    }
}

void findUnion(int arr1[], int arr2[], int n, int m)
{
    int p = 0, q = 0;
    int len1 = n;
    int len2 = m;

    vector<int> temp;

    while (p < len1 && q < len2)
    {
        if (arr1[p] < arr2[q])
        {
            if (temp.size() == 0 || temp.back() != arr1[p])
            {
                temp.push_back(arr1[p]);
            }
            p++;
        }
        if (arr1[p] > arr2[q])
        {

            if (temp.size() == 0 || temp.back() != arr2[q])
            {
                temp.push_back(arr2[q]);
            }
            q++;
        }
        if (arr1[p] == arr2[q])
        {
            temp.push_back(arr2[q]);
            p++;
            q++;
        }
    }

    while (p < len1)
    {
        if (temp.back() != arr1[p])
        {
            temp.push_back(arr1[p]);
        }
        p++;
    }
    while (q < len2)
    {
        if (temp.back() != arr2[q])
        {
            temp.push_back(arr2[q]);
        }
        q++;
    }

    for (auto it : temp)
    {
        cout << it << " ";
    }

    // return temp;
}

int missingNumber(vector<int> &nums)
{
    int len = nums.size();

    vector<int> arr(len + 1, 0);

    cout << arr.size() << endl;
    for (int i = 0; i < len; i++)
    {
        arr[nums[i]] = 1;
    }

    for (int i = 0; i < len; i++)
    {
        if (arr[i] == 0)
            return i;
    }

    return 0;
}

void lenOfLongSubarr(int A[], int N, int K)
{
    // Complete the function
    // vector<int>res;
    // int maxLen = 0;
    // map<int, int> preSumMap;
    // int sum = 0;

    // for (int i = 0; i < N; i++)
    // {
    //     sum += A[i];
    //     if (sum == K)
    //     {
    //         maxLen = max(maxLen, i + 1);
    //     }
    //     int rem = sum - K;
    //     if (preSumMap.find(rem) != preSumMap.end())
    //     {
    //         int len = i - preSumMap[rem];
    //         maxLen = max(maxLen, len);
    //     }
    //     if (preSumMap.find(sum) == preSumMap.end())
    //     {
    //         preSumMap[sum] = i;
    //     }
    // }

    int left = 0, right = 0;
    int sum = A[0];
    int maxLen = 0;

    while (right < N)
    {
        while (left <= right && sum > K)
        {
            sum -= A[left];
            left++;
        }
        if (sum == K)
        {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if (right < N)
            sum += A[right];
    }

    cout << "====> " << maxLen << endl;
}

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> res;

    // for (int i = 0; i < nums.size() - 1; i++) {
    //     for (int j = i + 1; j < nums.size(); j++) {
    //         if ((nums[i] + nums[j]) == target) {
    //             res.push_back(i);
    //             res.push_back(j);
    //             return res;
    //         }
    //     }
    // }

    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++)
    {
        int remains = target - nums[i];
        cout << "remains " << remains << endl;
        if (mp.find(remains) != mp.end())
        {
            res.push_back(i);
            // return res;
            break;
        }
        mp[remains] = i;
    }
    for (const auto &pair : mp)
    {
        cout << pair.first << " " << pair.second << endl;
    }

    return res;
}

// void sortColors(vector<int> &arr)
// {
//     int temp1 = 0, temp2 = 0;
//     int n = arr.size();
//     for (int i = 0; i < n; i++)
//     {
//         int flag = arr[i];
//         int j = i;
//         do
//         {
//             cout << flag << " " << arr[j] << endl;
//             j++;
//             if (flag == arr[j])
//             {
//                 swap(arr[j], arr[i]);
//             }
//             cout << "for i ki value" << i << " = " << arr

//         } while (j < n);
//     }
// }

int main()
{
    // Array *arr1;
    // int ch, sz;
    // int x, index;

    // printf("Enter array size \n");
    // scanf("%d", sz);
    // arr1 = new Array(sz);

    // arr1->Display();

    // arr1, 10, 23;
    int arr1[10] = {-7, -11, -3, -7, 4, 15, -13, 18, -10, -10};
    // 17 15;
    // ans = 5;
    int arr2[17] = {-13, 0, 6, 15, 16, 2, 15, -12, 17, -16, 0, -3, 19, -3, 2, -9, 6};

    // findUnion(arr1, arr2, 10, 3);

    vector<int> arr = {0, 1, 2, 2, 1, 0};
    // int arr[6] = {1, 2, 3, 4, 5, 7};

    // missingNumber(arr);
    cout << "ans " << twoSum(arr, 9).size() << endl;
    // sortColors(arr);

    return 0;
}