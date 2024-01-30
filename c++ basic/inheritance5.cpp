#include<iostream>
using namespace std;

class A
{
    int a;
    public:
    A(int k)
    {
        a=k;
    }
~A(){
    cout<<a<<endl;

}
    
};
class B:public A  // class b k constructor phela classs a ka constroctor ko call kra ga or us x pass kar daga or x ki value a ma assign ho jaya ge;
 {   int b;     // phela B constructor , A constructor ko call kra ga or A constructor ki coding execute hogi fir B ki
    public:

B(int x,int y):A(x)
{
    b=y;
}
~B() // phela B CALSS ka dectroctor call hoga or B ka he execute hoga fir wo class A k dectroctur ko calll kra ga or fir class A k dectroctur chala ge
{
    cout<<b<<endl;
}
};
int main(){
B obj(2,3); // ya pass hoga class   B ka argumnets ma and A(X) ma 2 pass hoga or a ki value set hojaya ge class ma 

}