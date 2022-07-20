#include <iostream>
using namespace std;

// function with 2 parameters
void display(int var1, double var2)
{
    cout << "double number: " << var1;
    cout << " and double number: " << var2 << endl;
}

// function with double type single parameter
void display(double var1)
{
    cout << "Double number: " << var1 << endl;
}

// function with int type single parameter
void display(int var1)
{
    cout << "Integer number: " << var1 << endl;
}

int main()
{

    int a;
    double b;
    cout << "*****************Give the number********************" << endl;
    cout << "***************give the number a*******************" << endl;
    cin >> a;

    cout << "**************give the number b*********************" << endl;
    cin >> b;

    display(a);
    display(b);

    display(a, b);

    return 0;
}
