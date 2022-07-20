#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"Give the number for a, b"<<endl;
    cin >> a >> b;
    

    try
    {
        if (b == 0)
            throw b;
        else
        {
            c = a / b;
            cout << " Result is " << c;
        }
    }
    catch (int x)
    {
        cout << "CAN'T DIVIDED BY = "<<x;
    }

    return 0;
}