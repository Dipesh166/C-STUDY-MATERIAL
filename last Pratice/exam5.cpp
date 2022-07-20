// mutiple inheritance
#include <iostream>
using namespace std;

class Base1
{
protected:
    int a;

public:
    void show()
    {
        cout << "Enter the value a" << endl;
        cin >> a;
    }
};

class Base2
{
protected:
    int b;

public:
    void show2()
    {
        cout << "Enter the value b" << endl;
        cin >> b;
    }
};

class Derived : public Base1, public Base2
{
private:
    int c;

public:
    void show3()
    {
        cout << "Enter the value c" << endl;
        cin >> c;
    }
    void display()
    {
        cout << "a==" << a<<endl;
        cout << "b==" << b<<endl;
        cout << "c==" << c<<endl;
    }
};

int main(){
    Derived ob;
    ob.show();
    ob.show2();
    ob.show3();
    ob.display();
    return 0;
}