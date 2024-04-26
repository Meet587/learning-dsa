#include <bits/stdc++.h>
using namespace std;

int sumOfDivisors(int n)
{
    int sum = 0;

    for (int i = 1; (i * i) <= (n + 1); i++)
    {
        if (n % i == 0)
        {
            // cout<<i<<endl;
            // cout<<n/i<<endl;
            sum = sum + i;
            if ((n / i) != i)
            {
                sum = sum + (n / i);
            }
        }
    }
    // cout<<sum<<endl;

    return sum;
}

int sumOfAllDivisors(int n)
{
    int sum = 0;

    for (int i = 1; (i) <= (n); i++)
    {
        sum = sum + sumOfDivisors(i);
    }

    return sum;
}

int main()
{
    cout << sumOfAllDivisors(5) << endl;
    cout << sumOfAllDivisors(14) << endl;
    cout << sumOfAllDivisors(9) << endl;
    return 0;
}