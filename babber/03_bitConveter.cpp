#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

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

// wrong function
int intToBit(int n)
{
    if (n < 0)
    {
        cout << "please provide positive number" << endl;
        cin >> n;
    }
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;

        ans = (bit * pow(10, i)) + ans; // reverse the digits 123 =>
        n = n >> 1;
        i++;
    }
    cout << ans << " answer" << endl;
    return ans;
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

int convert2Decimal(string x)
{
    x = reversString(x);
    int ans = 0;
    int length = x.size() - 1;
    for (int i = length; i >=0; i--)
    {
        if (x[i] == '1')
        {
            ans += pow(2, i);
        }
        // cout << i << " " << x[i] << endl;
    }
    cout << ans << endl;
    return 0;
}

// wrong function
int bitToInt(int n)
{
    int i = 0;
    int ans = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }
        n = n / 10;
        i++;
    }
    cout << ans << " answer" << endl;
    return ans;
}

int main()
{
    int n;
    cin >> n;
    string ans;
    // bitToInt(n);
    // intToBit(n);
    ans = convert2Binary(n);
    cout << ans << endl;
    convert2Decimal(ans);
    return 0;
}