#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int reverse(int x)
{
    long reverse = 0;
    for (int i = x; i != 0; i = i / 10)
    {

        cout << i % 10 << "i" << endl;
        reverse = (reverse * 10) + (i % 10);
        cout << reverse << "reverse" << endl;
    }
    if (x > INT32_MAX || x < INT32_MIN)
    {
        return 0;
    }
    return reverse;
}

int main()
{
    int a = 12;
    int b = 3;

    // cout << (a & b) << endl;
    // cout << (a | b) << endl;
    // cout << (a ^ b) << endl;
    // cout << ~b << endl;

    // cout << a << endl;
    // cout << b << endl;
    // for (int i = 0; i < 10; i++)
    // {
    //     int next = a + b;
    //     cout << next << endl;
    //     a = b;
    //     b = next;
    // }

    // for (int i = 2; i < 10; i++)
    // {
    //     if (10 % i == 0)
    //     {
    //         int a = 3;
    //         cout << "not prime";
    //         // break;
    //         cout << a;
    //     }
    // }
    // cout << " prime";
    // cout << a;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    // ans = pow(12, 3);
    cout << ans;

    // reverse(-123);
}