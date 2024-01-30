#include <iostream>
using namespace std;

class complex
{
private:
    int a,b;

public:
    void setdata(int l,int k)
    {
        a = l;
        b=k;
    }
    void showdata()
    {
        cout << "a= "<< a<<"  " << "b= "<<b<<endl;
    }
    
    friend int function(complex); // c1 complex type ka object ha is lea arument ma complex likha // { friend function}

    int temp_fun();
};
int function(complex c) //complex c argumnet freind function ma is lea likha talki ham ,c1 object ka a,b ki value phela c object store kra ga fri usko cout ki madad sa prindt kara da ge
 {  
    cout<<"addition of a and b is: "<<c.a+c.b;

}

int complex::temp_fun(){    // complex :: k matlab membership lable ha # ya is lea lagata ha taki pata chal saka ki ya complex class k function ha OR jab function class sa bhar declier kra ga tab asa he karna pada ga
    cout<<a << " and "<<b;
    
}

int main()
{
    complex c1,c2,c3;
    c1.setdata(2,3);
    c1.showdata();
    //function(c1); // we have to pass object to call the friend function
    c1.temp_fun();
}