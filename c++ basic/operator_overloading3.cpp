#include<iostream>
using namespace std;
class integer
{   private:
   int x;
   public:
   void setdata(int a)
   {
    x=a;
   }
   void showdata(){
    cout<<"x ="<<" "<<x; 
   }
   integer operator++( ) //pre increment
   {  integer temp;
        temp.x=++x;
        return temp;
   }
   integer operator++(int) //post increment # we only write int as argurment just to diffreenciate post increment with pre  increment so we don't use it using calling call with empty brackets or no brackets
   {
    integer i;
    i.x=x++;
    return i;

   }
};

int main(){
   integer i1,i2;
   i1.setdata(3);
    i1.showdata();
    i2=i1++; //post increment
    i2=++i1; //pre increment  nm 
    i2.showdata();
     i1.showdata();

}