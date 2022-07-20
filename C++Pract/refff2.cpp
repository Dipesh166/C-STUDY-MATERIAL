#include<iostream>
using namespace std;

int& f(int *ptr, int x){
    return ptr[x];
}

int main(){
    int a[100];
    cout<<f(a,10)<<endl;
    return 0;
}