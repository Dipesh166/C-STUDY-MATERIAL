#include<iostream>
using namespace std;

class Box {
    int a, b, add;
    public:
    void input (){
        cout<<"Give the value of x and y"<<endl;
        cin>>x>>y;
    }
    friend void add(Box &t );

    void display (){
        cout<<"THE SUM IS :"<<z<<endl;
    }
};

void add (Box &t){
t.add = t.a + t.b;
}

int main (){
Box t1;
t1.input ();
add(t1);
t1.display();
    return 0;
}