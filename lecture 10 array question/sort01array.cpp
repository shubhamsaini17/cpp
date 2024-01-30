#include<iostream>
using namespace std;
int printarray(int arr[],int size){
    for ( int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}
void sortone(int arr[],int size){
    int left=0 , right=size-1;
    while (left<right){

        while (arr[left]==0 || arr[left]==1  ){
        
            left++;
        }
        while (arr[right]==1 || arr[left]==2)
        {
            right--;
        }
        if (left<right){
        
    swap(arr[left],arr[right]);
    left++;
    right--;
        }
    }

}


int main()
{

int arr[10]={1,1,2,2,1,0,1,0,1,0};

sortone(arr,10);
printarray(arr,10);

return 0;
}