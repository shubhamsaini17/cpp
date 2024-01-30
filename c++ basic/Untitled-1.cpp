#include<iostream>
using namespace std;

int fibonacii(int n){
    if(n<=1)
    return 1;

    return fibonacii(n-1) + fibonacii(n-2);
}
int main()
{
cout<<fibonacii(2);
// int a=1;
// int b=1;
// int fib;
// cout<<" 0 "<<" 1 "<<" 1 ";
// for (int i = 2; i < 15; i++)
// {
//   fib= a+b;
//   a=b;
//   b=fib;
//   cout<<fib<<" ";
// }

return 0;
}


/*

// abstract class --wo class jis ka anda ak bhe pure virtual function mojud ha wo class abstract class hojati ha 
// or asi class k ham kabi bhe object nhi banasakta

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class person
{ public:
  virtual void fun()=0;  // pure virtual function {do nothing function}
  // pure virtual func. = ak do noting func, hota ha , jisko ham bas declare karta ha define nhi , or asa type ka func. ko ham kis bhe taraika sa class nhi kar sakta
  // jasa 1. na he pesron class k object banaga , to fun. func. call bhe nhi hoga
  // 2. na he ham child class ka object bana ka isa call kar sakta
  // 3. or na he ham person class ka pointer bana k object ka address ko point kar k bhe class kar sakata ha fun. func ko jo parent class person ma ha  
  void fun1(){

  }
};
class student
{ public:
  virtual void fun(){ // func. overriding

  }

};
int main() {
   // person p1; {error} hama class person k object nhi bana sakta jyo ki isma pure virtual func. ha
  
 
    // ## or agar person class ma or koi function ha {do nothing function } sa alag to usa us karna k lea uski child class banai pada ge or uska object k madad sa , pointer ki madad sa kar sakta ha
    // ha or child class ma pure virtual func. ki over riding bhe karni pada ge tabhi ham usa use kar paya ge
    return 0;
}

*/