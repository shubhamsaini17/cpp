#include<iostream>
using namespace std;

class car{
public:
    int a,b;
    int *p;
public:
    void setdata(int i,int j) {
        a=i;
        b=j;
    }   
    void showdata(){
        cout<<a<<" "<<b;
    }
};
int main(){

    car c1;
    car c2=c1;
    c1.setdata(1,2);
   c2.showdata();
}