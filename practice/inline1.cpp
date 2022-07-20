#include <iostream>
using namespace std;
class Operation
{
    int a,b,add,sub,mul;
    float div;
public:
    void display();
    void sum();
    void difference();
    void product();
    void division();
};
inline void Operation :: display()
{
    cout << "Enter a value:";
    cin >> a;
    cout << "Enter b value:";
    cin >> b;
}
  
inline void Operation :: sum()
{
    add = a+b;
    cout << "Addition of two numbers: " << a+b << "\n";
}
  
inline void Operation :: difference()
{
    sub = a-b;
    cout << "Difference of two numbers: " << a-b << "\n";
}
  
inline void Operation :: product()
{
    mul = a*b;
    cout << "Product of two numbers: " << a*b << "\n";
}
  
inline void Operation ::division()
{
    div=a/b;
    cout<<"Division of two numbers: "<<a/b<<"\n" ;
}
  
int main()
{
    cout << "Program using inline function\n";
    Operation s;
    s.display();
    s.sum();
    s.difference();
    s.product();
    s.division();
    return 0;
}