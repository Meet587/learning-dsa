#include <iostream>
using namespace std;

class Rectengal
{
private:
    int length;
    int bredth;

public:
    Rectengal(int l, int b)
    {
        length = l;
        bredth = b;
    }

    int area()
    {
        return length * bredth;
    }

    void changeLength(int l)
    {
        length = l;
        cout << length << endl;
    }
};

int main()
{
    Rectengal r(10, 5);
    int a = r.area();
    cout << a << endl;
    r.changeLength(8);
    return 0;
}