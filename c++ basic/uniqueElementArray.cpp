// find number jo array ma sirf ak baar ara ho
#include<iostream>
using namespace std;


int findunique(int arr[], int size){

int ans=0;
for(int i =0; i<size; i++){
ans=ans^arr[i];
}
return ans;
}
int main()
{
    int arr[9] = {6,24,24,2,5,5,3,3,6};
cout<<findunique(arr,9);
return 0;
}
