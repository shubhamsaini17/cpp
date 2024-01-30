#include<iostream>
using namespace std;

class a{
    public:
    void func(){
        cout<<"i am in class A"<<endl;
    }
};
class b{
    public:
    void func(){
        cout<<"i am in class B"<<endl;
    }
};
class c: public a,public b{
    public:
    void func1(){
        cout<<"i am in class C"<<endl;
    }
};


int main()
{
    c object3;
    // object3.func();
    object3.a::func(); // :: scope resulation operator

    object3.b::func(); // :: scope resulation operator
return 0;
}