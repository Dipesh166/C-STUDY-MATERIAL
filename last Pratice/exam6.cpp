// hierachical inheritance
#include <iostream>
using namespace std;

class Base
{
protected:
    int a, b;

public:
    void show()
    {
        cout << "Enter the value of a and b" << endl;
        cin >> a >> b;
    }
};

class Derived1 : public Base
{
protected:
    int c;

public:
    void add()
    {
        c = a + b;
        cout << "ADD==" << c << endl;
    }
};

class Derived2 : public Base
{
protected:
    int d;

public:
    void sub()
    {
        d = a - b;
        cout << "SUB==" << d << endl;
    }
};

int main()
{
    Derived1 ob;
    Derived2 ob1;

    ob.show();
    ob.add();

    ob1.show();
    ob1.sub();

    return 0;
}