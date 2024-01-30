// binary operator overload eg: + kyo ki is operation k lea 2 values ki jarurat hogi
// unary operator over loading eg: a value ko -a ma badalana usma sirf a value ki jaruruat hoti ha

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
   friend complex operator+(complex ,complex);
};

 complex operator+(complex c , complex d) // ya complex c nam k object value laga c1 sa {c3=c1+c2}  to c2 object ka a,b ki value bajaya d object  ki a,b ki value
    {
        complex temp; // temp is a object and temp.a.b temp obj k varibes ha
        temp.a = c.a+d.a; // c.a+d.a; first vala a= is belong to  c1 and d.a vala a c2 sa aya ga 
        temp.b = c.b+d.b; // c.b+d.b; first vala b= is belong to  c1 and c.b vala b c2 sa ya ga complex d ma fir temp.b k b ma;
        return temp;
    }
int main()
{
    complex c1, c2, c3;
    c1.setdata(3,4);
    c2.setdata(5,6);
    c3=c1+c2;  // c3=operator+(c1,c2)   # + call hua(operator+ func call hua) and c1 , c2 usma as an argument pass hua )
    c3.showdata();
}