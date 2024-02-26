#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct Rectengal
{
    int length;
    int width;
};

// int main()
// {
//     Rectengal r = {10, 5};

//     cout << r.length << endl
//          << r.width << endl;

//     Rectengal *p = &r; // IMP

//     cout << p->length << endl // IMP
//          << p->width << endl; // IMP

//     // r.length = 12;
//     // (*p).length = 14;  // same as
//     // p->length = 14;    // same

//     return 0;
// }
int main()
{

    Rectengal *p;
    // p = (struct Rectengal *)malloc(sizeof(struct Rectengal)); // c way to declar pointer in heap
    p = new Rectengal; // c++ way to declar pointer in heap

    p->length = 12;
    p->width = 16;

    cout << p->length << endl
         << p->width << endl;

    return 0;
}
