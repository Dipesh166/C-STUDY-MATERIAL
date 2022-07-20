// private and friend function both example in one program
#include <iostream>
using namespace std;

class A
{
private:
    int a, b;

public:
    void show()
    {
        a = 40;
        b = 60;
        cout << a << " " << b << endl;
    }
    friend class B;
};

class B
{
public:
    void dis(A ref)
    {
        ref.a = 100;
        ref.b = 100;
        cout << ref.a << " " << ref.b << endl;
    }
};

int main()
{
    A ob;
    B ob2;
    ob.show();
    ob2.dis(ob);
    return 0;
}