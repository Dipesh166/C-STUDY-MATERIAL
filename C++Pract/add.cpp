#include <iostream>
using namespace std;

class Operation
{

public:
    
    int sum(int a, int b)
    {
        return a + b;
    }

    int subtraction(int a, int b)
    {
        return a - b;
    }

    int multi(int a, int b)
    {
        return a * b;
    }

    double divison(int a, int b)
    {
        return (double)a / b;
    }
};

int main()
{
    int a = 10;
    int b = 2;

    Operation op;

    cout << "The given subtraction values are givesn below" << endl;
    cout << "The sum is " << op.sum() << endl;
    cout << "The subtraction is " << op.subtraction() << endl;
    cout << "The sum is " << op.multi() << endl;
    cout << "The sum is " << op.divison() << endl;

    return 0;
}