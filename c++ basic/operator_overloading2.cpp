#include<iostream>
using namespace std;
class complex
{   private:
    int a,b;
public:
void setdata(int q,int w){
 a=q;
 b=w;
}
void showdata(){
cout<<a<<" "<<b;
}
complex operator -()
{   
    complex temp;
    temp.a=-a;
    temp.b=-b;
   return temp;
}
};

int main(){
    complex c1,c2,c3;
    c1.setdata(3,4);
    c2=c1.operator-();
    c2.showdata();
    
}