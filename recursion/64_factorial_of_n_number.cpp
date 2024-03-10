#include <stdio.h>

int fact(int n)
{
    if (n > 0)
        return fact(n - 1) * n;
    else if (n == 0)
        return 1;
    else
        return 0;
}

int Ifact(int n)
{
    if (n < 0)
        return 0;
    int i, f = 1;

    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

int main()
{
    int r;
    r = Ifact(8);
    r = fact(8);
    printf("%d", r);
    return 0;
}