#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A()
    {
        a = 500;
        cout << "THE VALUE OF A IS :" << a;
    }
};

int main()
{
    A obj;
    return 0;
}