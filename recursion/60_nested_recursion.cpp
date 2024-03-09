#include <iostream>

using namespace std;

int fun(int n)
{
    if (n > 100)
        return n - 10;
    return fun(fun(n + 11));
}

int main()
{
    int r;
    r = fun(95);
    cout << r << endl;

    r = fun(46);
    cout << r << endl;

    r = fun(85);
    cout << r << endl;

    r = fun(30);
    cout << r << endl;

    r = fun(126);
    cout << r << endl;

    r = fun(176);
    cout << r << endl;

    r = fun(253);
    cout << r << endl;

    return 0;
}