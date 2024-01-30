
#include<iostream>

using namespace std;

int print_array(int array[],int size){


for (int i = 0; i <size; i++)
{
  cout<<array[i]<<endl;
}


}

int main(){

int array[10]={0,1,2,3,4,5,6,7,8,9};
int size = sizeof(array)/sizeof(int);
print_array(array,size);


}

