#include <iostream>

using namespace std;

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fib(n - 2) + fib(n - 1);
    }
}
int Ifib(int n)
{
    if (n <= 1)
    {
        return n;
    }

    int t1 = 0, t2 = 1, s = 0;

    for (int i = 2; i <= n; i++)
    {
        s = t1 + t2;
        t1 = t2;
        t2 = s;
    }
    return s;
}

int F[10];
int mfib(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 1] == -1)
        {
            F[n - 1] = mfib(n - 1);
        }

        if (F[n - 2] == -1)
        {
            F[n - 2] = mfib(n - 2);
        }
        F[n] = F[n - 2] + F[n - 1];
        return F[n - 2] + F[n - 1];
    }
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        F[i] = -1;
    }

    cout << mfib(5) << endl;

    return 0;
}