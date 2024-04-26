#include <bits/stdc++.h>

using namespace std;

int countDigits(int n)
{
    int dup = n;
    int count = 0;
    while (n != 0)
    {
        int digit = n % 10;

        cout << "digit " << digit << endl;
        if (digit != 0)
        {
            if (dup % digit == 0)
            {
                count++;
            }
        }

        n = n / 10;

        cout << "value of n " << n << endl;
    }
    return count;
}

int main()
{
    countDigits(660);
    return 0;
}