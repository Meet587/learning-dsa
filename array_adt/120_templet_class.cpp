#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

template <typename T>
class Array
{
private:
    T *A;
    int length;
    int size;

public:
    Array()
    {
        size = 10;
        length = 4;
        A = new T[size];
    }
    Array(int sz)
    {
        size = sz;
        length = 4;
        A = new T[size];
    }
    ~Array()
    {
        delete[] A;
    }

    T Display()
    {
        for (int i = 0; i < length; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Array<int> arr;
    arr.Display();
}