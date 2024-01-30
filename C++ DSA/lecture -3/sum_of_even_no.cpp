#include<iostream>
using namespace std;
int main()
{

int num;
cin>>num;
int i=2;
int sum=0;
while (i<=num)
{   if(i%2==0){
    sum= sum+i;
}
i++;
}
cout<<sum;


return 0;
}