#include<iostream> 
using namespace std;

// pass by value

void swap(int a , int b){
    int temp = a;
    a= b;
    b=temp;
    cout<<a<<" "<<b<<endl;
}
//  simple calll by reference
void swap_reference(int &a , int &b){
    int temp = a;
    a= b;
    b=temp;
}

//  call by refeence using pointers
void swap_reference_pointer(int *a,int *b){
     int temp = *a;
    *a= *b;
    *b=temp;
}

int main(){

int x=4,y=7;

// swap(x,y);
//  cout<<x<<" "<<y<<endl;

// swap_reference(x,y);
cout<<x<<" "<<y<<endl;

swap_reference_pointer(&x,&y);
cout<<x<<" "<<y;

    return 0;
}
