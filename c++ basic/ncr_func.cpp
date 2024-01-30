#include <iostream>
#include <math.h>
using namespace std;

int facto(int n){

    int factorial=1;
    
    for (int i = 1; i <= n; i++)
    {
        factorial*=i;
    }
    return factorial;
}

int nCr(int n, int r){
    int num= facto(n);
    int deno= facto(r) * facto(n-r);

    return num/deno;

}


int main()
{

    int n,r;
    cin>>n>>r;

    int ncr_ans=nCr(n,r);
    cout<<ncr_ans;

}