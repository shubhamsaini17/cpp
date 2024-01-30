#include <iostream>
using namespace std;

template <class t1=int ,class t2=float>
class shubham{
    public:
    t1 a;
    t2 b;

    void setdata(t1 x , t2 y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    }

};

int main()
{
    shubham<> s;
    s.setdata(3,35.34);
    s.display();
    return 0;
}