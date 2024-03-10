#include <iostream>

using namespace std;

int sum(int n)
{
    if (n == 0)
        return 0;
    return sum(n - 1) + n;
}

int Isum(int n)
{
    int s = 0, i;
    for (i = 0; i <= n; i++)
        s = s + i;
    return s;
}

int Nsum(int n)
{
    return n * (n + 1) / 2;
}
int main()
{
    int s;
    // s = sum(500);
    // s = Isum(500);
    s = Nsum(500);
    cout << s << endl;
    return 0;
}