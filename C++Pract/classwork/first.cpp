#include<iostream>
using namespace std;
class Count{
   
    int value;

    public:
    Count(): value(5){

    }
    void operation ++ (){
        ++value;
    }

    void operation ++(int){
        value++;
    }
    void display(){
        cout<<"Count:"<<value<<endl;
    }

};

void main (){
    Count count;
    count++;
    count.display();
    ++count;
    count.display();
}