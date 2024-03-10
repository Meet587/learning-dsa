#include <iostream>

using namespace std;

double power(double x, int n)
{

    if (n < 0)
        return power(x, n + 1) / x;

    else if (n == 0)
        return 1;
    else
        return power(x, n - 1) * x;
};

int main()
{
    double p;
    int n = 2147483647;
    double x = 0.00001;

    p = power(x, n);
    cout << p << endl;

    return 0;
}