// #------------Overloading of insertion and extraction---------------#


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
             (complex);
};



int main()
{
    complex c1, c2, c3;
    cout<<"enter a complex number: "<<endl;
    cin>>c1; //  cin.operator>>(c1);

}