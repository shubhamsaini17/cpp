#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    void setdata(int q, int w)
    {
        a = q;
        b = w;
    }
    void showdata()
    {
        cout << a << " " << b;
    }
    complex operator+(complex c) // ya complex c nam k object value laga c2 sa {c3=c1+c2}  to c2 ka a,b ki value bajaya C ki a,b ki value
    {
        complex temp; // temp is a object and temp.a.b temp obj k varibes ha
        temp.a = a+c.a; // a+c.a; first vala a= is belong to caller object c1; 
        temp.b = b+c.b; // b+c.b; first vala b= is belong to caller object c1;
        return temp;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setdata(3,4);
    c2.setdata(5,6);
    c3=c2+c1;  // c3=c1.operator+(c2)  // c1 na apna + name k function ko call kiya and c2 usma as an argument pass hua and + na jo return kiya wo c3 ma assign hogya 
    c3.showdata();
}