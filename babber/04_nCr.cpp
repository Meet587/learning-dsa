#include <bits/stdc++.h>

using namespace std;

long factorial(int n)
{
    if (n == 0)
        return 1;
    long ans = 1;
    for (int i = 2; i <= n; i++)
    {
        ans = ans * i;
    }
    return ans;
}

void func()
{
    return ;
}

long nCr(int a, int b)
{
    return factorial(a) / (factorial(b) * (factorial(a - b)));
}

int main()
{
    int n, b;
    cin >> n;
    cin >> b;
    cout << "n " << n << " b " << b << endl;
    long ans;
    ans = nCr(n, b);

    cout << "answer is " << ans << endl;
}