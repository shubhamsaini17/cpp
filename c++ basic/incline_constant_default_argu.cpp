#include<iostream>
using namespace std;

// inline function - ma ya sara function ka code replace ho jaya ga us jaga pa jaha ya function call hoga jo ki speed ko badata ha { sum(x,y) is replace with full function if we write inline in front of function}
inline int sum(int a, int b){
 return a+b;
}

int product(int a, int b=2){  // {default argument} agar ham B ki value nhi da ga to ya default value 2 set kar de ga apna app 
 return a*b;
}

// create an integer Test() function contains an argument num  
int Test (const int num)  
{  
// if we change the value of the const argument, it thwrows an error.  
// num = num + 10;  
cout << " The value of num: " << num << endl;  
return 0;  
}  


int main()
{
int x=2,y=5;

cout<<sum(x,y)<<endl; // the sum(x,y) replace with full function here

 
cout<<product(x)<<endl;  //  not giving value of b here it will set by default 2 or if we give any other vlaue the that value is set in B

return 0;
}