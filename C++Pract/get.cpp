#include <iostream>
using namespace std;

class employe{

    private:
    int a, b;
    
    public:
    int c;
    int d;
   void setdata(int a1, int b1);
   void getdata(){
       cout<<"The value of a : "<<a<<endl;
        cout<<"The value of b :"<<b;

   }
};

void employe :: setdata(int a1, int b1){
 a=a1;
 b=b1;
}
int main(){
int a=45;   
int b=65;
    employe dip;
    dip.setdata(a,b);
    dip.getdata();
    return 0;
}