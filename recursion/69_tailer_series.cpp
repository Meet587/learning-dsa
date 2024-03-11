#include <stdio.h>
#include <iostream>

using namespace std;

double Ie(int x, int n)
{
    double s = 1, num = 1, den = 1;
    int i;

    for (i = 1; i <= n; i++)
    {
        num = num * x;
        den = den * i;
        s = s + (num / den);
    }
    return s;
}

double e(int x, int n)
{
    static double s = 1;
    if (n == 0)
        return s;

    s = 1 + (x * s / n);

    return e(x, n - 1);
}

int main()
{

    cout << Ie(2, 10) << endl;

    return 0;
}