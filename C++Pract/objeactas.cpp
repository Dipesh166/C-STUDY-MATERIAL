#include <iostream>
using namespace std;

class Total
{
    int n;

public:
    void getdata(void);
    void putdata(void);
    void add(Total, Total);
};

void Total ::getdata(void)
{
    cout << "GIVE THE NUMBER";
    cin >> n;
}

void Total ::putdata(void)
{
    cout << n << endl;
}

void Total ::add(Total x, Total y)
{
    n = x.n + y.n;
}

int main()
{
    Total a, b, result;
    a.getdata();
    b.getdata();
    cout << "The value of A:";
    a.putdata();

    cout << "The value of B:";
    b.putdata();

    result.add(a, b);
    cout << "Addition is :";
    result.putdata();
    return 0;
}