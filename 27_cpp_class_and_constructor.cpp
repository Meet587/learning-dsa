#include <iostream>
using namespace std;

class Rectengal
{
private:
    int length;
    int bredth;

public:
    Rectengal() // default contructor
    {
        length = bredth = 0;
    }
    Rectengal(int l, int b) // parameterize construtor
    {
        length = l;
        bredth = b;
    }

    int area() // fasilitator function
    {
        return length * bredth;
    }

    int perimeter() // fasilitator function
    {
        return 2 * (length * bredth);
    }

    void setLength(int l) // accesser function
    {
        length = l;
        cout << length << endl;
    }

    void setBreadth(int b) // accesser function
    {
        bredth = b;
        cout << bredth << endl;
    }

    int getLength() // mutetor function
    {
        return length;
    }

    int getBreadth() // mutetor function
    {
        return bredth;
    }
    ~Rectengal()
    {
        cout << "Destructor function. it calls automatically when program is end" << endl;
    }
};

int main()
{
    Rectengal r(10, 5);
    int a = r.area();
    cout << a << endl;
    cout << "breadth " << r.getBreadth() << endl;
    return 0;
}