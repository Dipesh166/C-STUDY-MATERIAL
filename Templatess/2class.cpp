// =========================> CLASS TEMPLATES <======================
#include <iostream>
using namespace std;
template <class T>

class Show
{
    T a;
     T b;

public:
    Show(T p, T q)
    {
        a = p ; 
        b = q;
    }

    void sid()
    {
        cout << "A=" << a << "B=" << b << endl;
    }
};

int main()
{
    Show<int> ob(4, 5);
    Show<double> ob1(4.5, 5.5);
    Show<char> ob2('a','b');

    ob.sid();
    ob1.sid();
    ob2.sid();
    return 0;
}