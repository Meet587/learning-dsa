#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    int count = 0;
    for (int i = 1; (i * i) <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            if (i != n)
            {
                count++;
            }
        }
    }
    if (count == 2)
    {
        return true;
    }
    return false;
}

int main()
{
    cout << isPrime(17) << endl;
    return 0;
}