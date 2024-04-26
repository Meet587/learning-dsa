#include <bits/stdc++.h>

using namespace std;

bool palindrome(int n)
{
    int dup = n;
    int reverse = 0;
    while (n != 0)
    {
        reverse = (reverse * 10) + (n % 10);
        n = n / 10;
    }
    cout << "reverse " << reverse << endl;

    return reverse == dup;
}

int main()
{

    cout<<palindrome(12321)<<endl;
    return 0;
}