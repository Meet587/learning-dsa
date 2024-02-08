#include <iostream>
using namespace std;

int main()
{
    struct rectengal
    {
        int length;
        int width;
    };

    int a[5];
    a[3] = 214;
    for (int i = 0; i < 5; i++)
    {
        // cout << a[i] << endl;
    }

    struct rectengal r;
    r.length = 5;
    r.width = 10;

    printf("area is %d", r.length * r.width);

    return 0;
}