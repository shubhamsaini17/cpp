#include<iostream>
using namespace std;

class car{
    private:
    int a;
    int b;
    const int s;   // constant varible ko banata vakat he initalize karna padta ha 
    int &y;  // reference vriable ko be banta vakt he inelatize kana padaata ha 
    // lakin ham initilzation list ki madad sa usa baad ma be declare kar sakta ha
    public:
    car(int i , int j , int t,int d) : s(t) , y(d)  // this is initizlization list
{
    a=i;
    b=j;
   
    cout<<a<<" "<<b<<" "<<s<<" "<<y;
}
};
int main(){
    car volvo(5,6,9,0);
    int m=6;
   
}