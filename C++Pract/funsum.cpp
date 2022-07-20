#include<iostream>
using namespace std;

int sum (int a, int b, int c=0, int d=0){
    return a+b+c+d;

}

int main(){
    cout<<"addition ="<<add(10,25)<<endl;
    cout<<"addition ="<<add(10,25,30)<<endl;
    cout<<"addition ="<<add(10,25,30,50)<<endl;
    cout<<"addition ="<<add(10,25,60)<<endl;
    return 0;
}