#include <iostream>
#include <stdlib.h>
using namespace std;
struct Rectengal
{
    int length = 10;
    int breath = 5;
};

// int area(struct Rectengal r1)  // call by value function as a structure
// {
//     return r1.length * r1.breath;
// }

// int main()
// {
//     struct Rectengal r;
//     r = {10, 5};

//     printf("%d", area(r)); // call by value function

//     return 0;
// }

// void changelength(struct Rectengal *r1, int l) // call by address function as a structure
// {
//     r1->length = l;
// }

// int main()
// {
//     Rectengal r;
//     r = {10, 5};
//     changelength(&r, 20);
//     printf("%d", r.length); // call by address function

//     return 0;
// }

struct Rectengal *func() // return pointer of structure
{
    struct Rectengal *p;

    // p = (struct Rectengal *)malloc(sizeof(struct Rectengal));  // c language syntax to create structure in heap
    p = new (struct Rectengal); // c++ language syntax to create structure in heap

    p->length = 15;
    p->breath = 7;

    return p;
}

int main()
{
    struct Rectengal *ptr = func();

    cout << ptr->breath << endl
         << ptr->length << endl;

    return 0;
}