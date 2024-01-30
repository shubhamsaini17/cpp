#include<iostream>
using namespace std;
class complex
{  private:
    int real;
    int img;
    public:
    void setdata(int a, int b)
    {
        real=a;
        img=b;

    }
    // void display()
    // {
    //     cout<<real<<" + i "<<img;
    // }
    
    friend ostream & operator <<(ostream &o , complex &c1);

};
ostream & operator <<(ostream &o , complex &c1)
 {
        o<<c1.real<<" + i "<<c1.img;
        return o;
    }
int main(){
    complex c1;
    
c1.setdata(2,4);
cout<<c1;
}