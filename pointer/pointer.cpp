#include<iostream>
using namespace std;

int main (){
    int a=3;
    int* b = &a;
    

    cout<<"The address of a"<<&a<<endl;
    cout<<"The address of a"<<b<<endl;

    cout<<"The value of b =="<<*b<<endl;
    return 0;
}