#include <iostream>
using namespace std;

class A
{
protected:
    int a, b;

public:
    void input()
    {
        cout << "Give the value of a and b" << endl;
        cin >> a >> b;
    }
};

class B : public A
{
private:
    int m, n;

public:
    void givedata()
    {
        cout << "Give the value of a and b" << endl;
        cin >> m >> n;
    }

    void getData()
    {

        cout << "THe value of m and n" << m << " " << n << endl;
        
    }
void dis(){
    cout << "THe value of a and b" << a << " " << b << endl;
}

};

int main()
{
    
    B ob1;
    ob1.input();
    ob1.givedata();
    ob1.getData();
    ob1.dis();

    return 0;
}