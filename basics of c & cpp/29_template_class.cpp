#include <iostream>
using namespace std;

// class Arithamati
// {
// private:
//     int a;
//     int b;

// public:
//     Arithamati(int a, int b);
//     int add();
//     int sub();
// };

// Arithamati::Arithamati(int a, int b)
// {
//     this->a = a;
//     this->b = b;
// }

// int Arithamati::add()
// {
//     int c = 0;
//     c = a + b;
//     return c;
// }

// int Arithamati::sub()
// {
//     int c = 0;
//     c = a - b;
//     return c;
// }

// int main1()
// {
//     Arithamati ar(10, 5);
//     cout << "normal class func with int data type" << ar.add() << endl;
//     return 0;
// }

// lets convert it into a template class

template <class T>
class Arithamatic
{
private:
    T a;
    T b;

public:
    Arithamatic(T a, T b);
    T addNum();
    ~Arithamatic();
};

template <class T>
Arithamatic<T>::Arithamatic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template <class T>
T Arithamatic<T>::addNum()
{
    T c = 0;
    c = a + b;
    return c;
}

template <class T>
Arithamatic<T>::~Arithamatic()
{
    cout << "destructor function" << endl;
}

int main()
{
    Arithamatic<float> ar1(10.23, 5.54);
    // Arithamatic<int> ar2(10, 5);
    cout << "with float data type " << ar1.addNum() << endl;
    return 0;
}