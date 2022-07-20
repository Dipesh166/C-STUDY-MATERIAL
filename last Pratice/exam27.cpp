// friend function urinary overloading
#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    A(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << a << "  " << b << endl;
    }
    friend void operator-(A &ref);
};

void operator-(A &ref)
{
    ref.a = -ref.a;
    ref.b = -ref.b;
}

int main()
{
    A ob(10, 30);
    ob.show();
    -ob;
    ob.show();
    return 0;
}
