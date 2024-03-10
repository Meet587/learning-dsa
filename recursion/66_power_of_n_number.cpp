#include <iostream>

using namespace std;

int power(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return power(m, n - 1) * m;
}

int Ipower(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        return Ipower(m * m, n / 2);
    }
    else
    {
        return m * Ipower(m * m, (n - 1) / 2);
    }
}

int main()
{
    int p;

    p = power(2, 10);
    p = Ipower(2, 10);
    cout << p << endl;

    return 0;
}