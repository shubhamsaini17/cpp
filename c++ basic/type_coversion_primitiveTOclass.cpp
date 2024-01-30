#include<iostream>
using namespace std;

class complex{
private:
    int a,b;
    
public:
complex(){}  //default constructor
    complex(int k){
        a=k;
        b=0;
    }
    void setdata(int i,int j) {
        a=i;
        b=j;
        
    }   
    void showdata(){
        cout<<"a: "<<a<<" "<<"b: "<<b;
    }
      
};
int main(){

    complex c1;
    int x=5;
    c1=x;    //c1.complex(x) // this statment will call a constructor with one argument and help to convert integer no. to complex no.
    c1.showdata();
}