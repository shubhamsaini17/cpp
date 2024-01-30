#include <iostream>
using namespace std;

class product
{
private:
    int m, n;

public:
    void setdata(int i, int j)
    {
        m = i;
        n = j;
    }
    int getM() 
    {
        return (m);
    }
    int getN()
    {
        return (n);
    }
};
class item{
private:
    int a, b;

public:
   
    void showdata()
    {
        cout << "a: " << a << " "
             << "b: " << b;
    }
    item() {}
    item(product p)
    {
        a = p.getM();  // ham m or n ki value directly use nhi kar sakata product class ma kyo kis wo dono private members ha is lea iteam class ma 2 fucntion banya ge jo M , N ki value return kara ge product class ko
        b = p.getN();   
    }
};
int main()
{
    item i1;
    product p1;
    p1.setdata(3, 4);
    i1 = p1; //converting p1 class type data to i1 class type data
    i1.showdata();
}