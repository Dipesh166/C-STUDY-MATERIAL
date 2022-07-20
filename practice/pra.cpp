#include<iostream>
using namespace std;

class dope {
    public:
    string name;
    int reg;

    void printname (){
    cout<<"My name is "<<name<<"\nMy registration is:"<<reg;
    }

};

int main (){
    dope obj1;
    obj1.name="DEEPESHH";
    obj1.reg=12;

    obj1.printname();
    return 0;
}