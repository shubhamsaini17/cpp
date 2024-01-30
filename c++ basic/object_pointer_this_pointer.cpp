#include <iostream>
using namespace std;

class box
{
 int l,b,h;
 public:
 int setdata(int x,int y, int z){
    l=x;
    b=y;
    h=z;
 }
 int getdata(){
    cout<<l<<" "<<b<<" "<<h;
 }
};
int main()
{
    box *p,smallbox;
    p=&smallbox;
    p->setdata(24,2,5);
    p->getdata();


}