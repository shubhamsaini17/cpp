#include<iostream>
using namespace std;

// inline function - ma ya sara function ka code replace ho jaya ga us jaga pa jaha ya function call hoga jo ki speed ko badata ha { sum(x,y) is replace with full function if we write inline in front of function}
inline int sum(int a, int b){
 return a+b;
}

int main()
{
int x=2,y=5;

cout<<sum(x,y)<<endl; // the sum(x,y) replace with full function here



return 0;
}