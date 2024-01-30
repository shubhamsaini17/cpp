// #------------Overloading of unary operator as a friend function---------------#

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
        cout << "a= "<<a << " " << "b= "<<b;
    }
  friend complex operator-(complex);
};

 complex operator-(complex x){
        complex temp;
        temp.a=-x.a;
        temp.b=-x.b;
        return temp;
   }


int main()
{
    complex c1, c2, c3;
    c1.setdata(3,4);
    c2=-c1; // c1.operator-();  ##  - func. (operator- func) call hua and usma c1 sa a argument pass hua or jo - fun. na return kiya wo c1 ma pass hua.
    c1.showdata();
    cout<<" "<<endl;
    c2.showdata();
}