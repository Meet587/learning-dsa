#include <iostream>

using namespace std;

int reverse(int x)
{
    int reverse = 0;
    for (int i = x; i != 0; i = i / 10)
    {
        if (reverse > INT32_MAX / 10 || reverse < INT32_MIN / 10)
        {
            return 0;
        }
        cout << i % 10 << "i" << endl;
        reverse = (reverse * 10) + (i % 10);
        cout << reverse << "reverse" << endl;
    }

    return reverse;
}

int main()
{
    // leetcode problem number 7
    reverse(10909);
}