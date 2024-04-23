#include <bits/stdc++.h>

using namespace std;

// swap the number with XOR operator
void swap(int a, int b)
{

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "a " << a << "\n";
    cout << "b " << b << "\n";
}

string reversString(string x)
{
    int len = x.size() - 1;
    string res = "";
    while (len >= 0)
    {
        res = res + x[len];
        len--;
    }
    return res;
}

string convert2Binary(int n)
{
    string res = "";
    while (n > 0)
    {
        if (n % 2 == 1)
            res += "1";
        else
            res += "0";
        n = n / 2;
    }
    res = reversString(res);
    return res;
}

// check if ith bit is set(means 1) or not
bool IsSet(int n, int i)
{
    // if (n & (1 << i)) // with left shift
    if ((n >> i) & 1) // with right shift
    {
        return true;
    }
    return false;
}

int SetTheBit(int n, int i)
{
    cout << convert2Binary(n) << endl;
    int ans;
    if (((1 << i) | n) != 0)
        ans = 1 << i | n;
    cout << convert2Binary(ans) << endl;
    return ans;
}

int ClearTheBit(int n, int i)
{
    int ans;
    cout << convert2Binary(n) << endl;
    ans = n | (~(1 << i));
    cout << convert2Binary(ans) << endl;
    return ans;
}

// check the number is power of 2
bool isPower2(int n)
{
    if ((n & (n - 1)) == 0)
        return 1;
    return 0;
}

// count the number of set bit
int CountSetBits(int n)
{
    int count = 0;
    while (n > 0)
    {
        // if ((n % 2) == 1)    // 1st method
        // {
        //     count++;
        // }
        // n = n / 2;

        // count += n & 1;      // 2nd method
        // n = n >> 1;

         count++;             // 3rd method
         n = n & (n - 1);
    }
    return count;
}

int main()
{
    int a = 3;
    int b = 4;

    // swap(a, b);
    // bool ans;
    // ans = IsSet(13, 2);
    // cout << ans << endl;
    a = ClearTheBit(9, 2);
    cout << CountSetBits(12) << endl;
    cout << CountSetBits(13) << endl;
    cout << CountSetBits(47) << endl;
    cout << CountSetBits(33) << endl;

    return 1;
}