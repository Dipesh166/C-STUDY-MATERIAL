#include <iostream>
using namespace std;

class A
{
private:
    int a, b;

public:
    A(int x, int y)
    {
        a = x;
        b = y;
    }

    A(A &ref)
    {
        a = ref.a;
        b = ref.b;
    }

    void show()
    {
        cout << "The value of a:" << a << endl
             << "The value of b:" << b << endl;
    }
};

int main()
{
    A obj(5, 10);
    A obj1 = obj;
    // parameterized constructor
    obj.show();
    // copy constructor will work here
    obj1.show();
    return 0;
}