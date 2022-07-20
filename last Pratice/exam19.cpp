// default constructor
#include <iostream>
using namespace std;

class A
{
    int a;
    public:
    A(){
        a=1000;
        cout<<a;
    }
};
int main(){
    A ob;
    return 0;
}