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

        while (arr[left]==0){
        
            left++;
        }
        while (arr[right]==1)
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

int arr[8]={1,1,1,0,1,0,1,0};

sortone(arr,8);
printarray(arr,8);

return 0;
}