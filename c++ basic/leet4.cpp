// +ve decimal number to binary
#include<iostream>
#include<math.h>
using namespace std;

int main(){

int n;
cout<<"enter num. to be converted on binary"<<endl;
cin>>n;

float ans=0;
int i=0;

while (n!=0)
{
    int bit= n&1;

    ans =(bit *pow(10,i))+ans;

    n=n>>1;
    i++;

}

cout<<"Answer is: "<<ans<<endl;

}
