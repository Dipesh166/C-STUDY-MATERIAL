#include<iostream>

using namespace std;


int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
int a;
cout<<"Give the value of a"<<endl;
cin>>a;
cout<<"The factroril of a is "<<a<<"The value is :"<<factorial(a)<<endl;

    return 0;
}