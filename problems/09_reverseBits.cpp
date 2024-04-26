#include <bits/stdc++.h>

using namespace std;

long reverseBits(long n)
{
    // Write your code here.

    long ans = 0;
    for (int i = 0; i < 32; i++)
    {
        long lsb = n & 1;
        long reverse = lsb << (31 - i);

        ans = ans | reverse;

        n = n >> 1;
    }
    return ans;
}

int main()
{
    cout << reverseBits(4) << endl;
    cout << reverseBits(12) << endl;
    cout << reverseBits(45) << endl;
    return 0;
}