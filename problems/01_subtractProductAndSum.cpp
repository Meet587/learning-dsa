#include <iostream>

using namespace std;

int subtractProductAndSum(int n)
{
    int product = 1;
    int sum = 0;
    for (int i = n; i >= 1; i = i / 10)
    {
        // cout << i % 10 << " product " << product << endl;
        product = product * (i % 10);
        sum = sum + (i % 10);
        // cout << sum << " sum" << endl;
    }

    cout << product << " product" << endl;
    cout << sum << " sum" << endl;
    // cout << n / 10 << " sum" << endl;

    return product - sum;
}

int main()
{

    subtractProductAndSum(12345);
}