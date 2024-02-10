#include <iostream>
#include <stdlib.h>
using namespace std;

struct Rectengal
{
    int length;
    int breath;
};

void initialize(struct Rectengal *r1, int l, int b)
{
    r1->length = l;
    r1->breath = b;
}

int add(Rectengal r1)
{
    return r1.breath + r1.length;
}

void changelength(struct Rectengal *r1, int l)
{
    r1->length = l;
}

int main()
{
    struct Rectengal r;

    initialize(&r, 5, 10);
    cout << r.length << endl;
    add(r);
    changelength(&r, 12);
    cout << r.length << endl;
    return 0;
}
