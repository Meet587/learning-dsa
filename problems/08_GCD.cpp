#include <bits/stdc++.h>

using namespace std;

int gcdBruteForce(int a, int b)
{
    // Write your code here
    int gcd = 1;
    for (int i = 1; i <= min(a, b); i++)
    {
        // cout<< a/i<<" "<< b/i<<endl;
        if (a % i == 0 && b % i == 0)
        {
            // cout<<"gcd "<< i<<endl;
            gcd = i;
        }
    }

    return gcd;
}

/*
    //  Using Euclidean’s theorem.

    Gcd is the greatest number which is divided by both a and b.If a number is divided by both a and b, it is should be divided by (a-b) and b as well.

    gcd(a,b) = gcd(b,a%b)  where a>b
*/

int gcdOptimal(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcdOptimal(b, a % b);
}

int main()
{
    cout << gcdOptimal(10, 45) << endl;
    return 0;
}