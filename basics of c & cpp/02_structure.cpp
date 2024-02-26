#include <stdio.h>
#include <iostream>
using namespace std;

struct card
{
    int face;
    int shape;
    int color;
};

int main()
{
    struct card c = {1, 0, 0};

    c.shape = 3;
    c.face = 2;
    c.color = 1;

    printf("%d\n", sizeof(c));
    
    cout << c.shape << endl;
    cout << c.face << endl;
    cout << c.color << endl;

    return 0;
}
