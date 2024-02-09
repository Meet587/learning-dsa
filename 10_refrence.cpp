#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int &r = a;
    cout << a << endl;
    r++;
    cout << a << endl;

    int b = 25;
    r = b;
    cout << a << endl
         << b << endl;

    return 0;
}