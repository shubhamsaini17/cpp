#include<iostream>
using namespace std;

class a{
    public:
    void func(char a){
        cout<<"i am in class A"<<endl;
    }
    void func(){
        cout<<"i am in class A2"<<endl;
    }
};



int main()
{
    a obj;
    obj.func();
 
return 0;
}