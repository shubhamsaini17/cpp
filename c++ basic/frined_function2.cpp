// # a single func. can be friend of 2 or more classes at same time
// and we can access the private member varible(a,b varible of class 1 ,2) of both the class using by one one single friend function
// friend function ko ham class k ander dono jaga declare kar sakta ha public: ya fir private
// first , second in class are userdefind datatypes

#include <iostream>
using namespace std;

class second;
class first
{
private:
    int a;

public:
    void setdata(int l)
    {
        a = l;
    }
    friend int fun(first, second);  //ya pa comiler ko samaj nhi arr raha tha second nam k datatype kya ha yaha kyo ji usa a class second k mhi pata
};
class second
{
private:
    int b;

public:
    void setdata(int k)
    {
        b = k;
    }

    friend int fun(first, second);
};

int fun(first o1, second o2) // o1,o2 object ha , first and second nam k datatype ka or is ma value obj1 and obj2 sa jaya ge
{
    cout << "sum of variable object is: " << o1.a + o2.b; 
}

int main()
{
    first obj1;
    second obj2;
    obj1.setdata(2);
    obj2.setdata(3);
    fun(obj1, obj2);  // ya obj1 , obj2 object k anadar vali value a,b pass hogi friend function ma
}