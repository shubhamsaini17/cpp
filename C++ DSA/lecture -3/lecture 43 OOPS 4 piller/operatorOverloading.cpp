#include <iostream>
using namespace std;

class B
{
public:
    int a;
    int b;

public:
    int add()
    {
        return a + b;
    }

    // + overload to -
    void operator+ (B &obj)
    {
        // int value1 = this->a;
        // int value2 = obj.a;
        // cout << "output " << value2 - value1 << endl;

        cout<<"HELLO"<<endl;
    }

    // bracket over load
    void operator() (){
        // cout<<"i am brackets"<<endl;
        cout<<"i am brackets "<<this->a<<endl;
    }
};

int main()
{
    B obj1,obj2;
    obj1.a = 4;
    obj2.b= 7;

    obj1+obj2;

    obj1();
}