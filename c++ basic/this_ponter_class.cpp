#include <iostream>
using namespace std;

class box
{
 int l,b,h;
 public:
 int setdata(int l,int b, int h){
    this->l=l;
    this->b=b;
    this->h=h;
 }
 int getdata(){
    cout<<l<<" "<<b<<" "<<h;
 }
};
int main()
{
    box smallbox;
   smallbox.setdata(24,2,5);
    smallbox.getdata();


}