//==========================<<<<<<<<< TEMPLATE >>>>>>>>>>>>>>>>>>>>>>>=====================

#include <iostream>
using namespace std;
template <class T>

void show(T a, T b)
{
    cout << "A=" << a << " B=" << b << endl; //function template
}

int main()
{
    int p = 10, q = 20;
    float m = 12.5f, n = 45.6f;
    char r = 'a', s = 'b';
    show(p, q);
    show(m, n);
    show(r, s);
    return 0;
}