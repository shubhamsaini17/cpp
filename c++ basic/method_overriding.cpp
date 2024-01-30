#include<iostream>
using namespace std;

class A{
    public:
    void func1(){

    }
    void func2(){

    }
};
class B :public A
{
    public:
    void func1() //[method overriding] {do class ma jab 2 function same ho unka argumnets bhe , unka name bhe , bas unka ander ki coding different ho }
    {

    }
    void func2(int x){  // [Method hiding]  {do class ma jab 2 function same ho unka argumnets different ho , unka name same , bas unka ander ki coding different ho

    }
};
void main()
{
B obj;
obj.func1(); // B class vala func1 run kra ga
// obj.func2();     //func2 namematch ho gya ha class B ma lakin argumenrt nhi ha to ya ERRROR daga or parent class A ma bhe nhi check kara ga
obj.func2(5); //ab error nhi daga kyo ki argument pass ho gya ha to ab class B ma jo FUNC2 ha wo call ho jaya ga obj object ki madad sa


// [function orverloading in class] tab hogi jab ak he class ma do same datatype and name , or diffrent argument k function ho tab 
}