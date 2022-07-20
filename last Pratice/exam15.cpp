
//function templates

#include<iostream>
using namespace std;
template<class T>
void show(T a, T b){
    cout<<"A="<<a<<"  "<<"B="<<b<<endl;
}

int main (){
    int p=10,q=40;
    char m='a',n='b';
    show(p,q);
    show(m,n);
    return 0;
}