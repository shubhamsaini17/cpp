// converting a class type datatype in primitve type using casting operator
// converting complex no. to integer using casting operator
#include <iostream>
using namespace std;

class complex
{
private:
    int a, b;

public:
    void setdata(int i, int j)
    {
        a = i;
        b = j;
    }
    void showdata()
    {
        cout  << a << " +"
             << "i" << b;
    }
    operator int() //casting operation // int is lea lagaya kyo ki int ma convert karna tha complex ko
    {               
         return (a); // a wo he return kra ga jis type ma tuma complex ya class datatype ko convert karna ha
    }
};
int main()
{

    complex c1;
    int x;
    c1.setdata(3, 4);
    x = c1; // x= c1.operator int(x) // this statment will call a constructor with one argument and help to convert integer no. to complex no.
    c1.showdata();
    cout<<endl<<"interger type: "<<x;
}