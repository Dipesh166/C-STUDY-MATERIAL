//inline functio is use to reduce the overhead in the program it execute faster than the normal function
//inline function only take the single instruction

#include<iostream>
using namespace std;

inline int ass(int a, int b){
    return (a>b)?a:b;
}
int main(){
    int s= ass(20,50);
    cout<<"MAXIMUM VALUE IS "<<s<<endl;
    return 0;
}