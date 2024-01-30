// #------------Member function of one class can become friend to another class---------------#
// class a become friend of class b;
// agar haham class A ma jo function ha usko class B k friend function banan ho to uska lea program;
// ak class to dursri class k friend banana k lea -- matlab class A ma jitna be function hoga wo class B k bhe friend fuction banjaya ge 

#include <iostream>
using namespace std;

class A
{
public:
    void func1()
    {}
    void func2(){

    }
};

class B
{   
    friend class A; // asa karna hamara sara class A fucntion class B k friend ban jaya ga ## or hamra ak ak kar k friend nhi banana pada ga jasa nicha kiya gya ha  
          
    friend void A::func1(); // func1 of class A become friend of class B ## a::scoperesolution is lea lahya taki pata chal saka ya func1 vala fucntion class A ka hA ## naki to dono classes k bhar func1 ha wo
    friend void A::func2(); //same
    

};

void func1(){ // this is different from class k func1 function

}


int main()
{
  

}