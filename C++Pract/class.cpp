#include <iostream>
using namespace std;
class Student
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
};

int main()
{
    Student ob1;
    cout << "The value is :" << ob1.sum(10, 10) << endl;
    return 0;
}