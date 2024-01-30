#include<iostream>
using namespace std;
int main()
{
int size;
cin>>size;
int arr[100]={1,2,3,4,5,6};
int temp=0;

for (int i = 0; i <=size; i+=2)
{   temp=arr[i+1];
    arr[i+1]=arr[i];
    arr[i]=temp;
        
}
for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<" "<<endl;
}
 

return 0;
}

// or

// #include <iostream>
// using namespace std;

// void printarray(int arr[],int size){
//  for (int i = 0; i < 6; i++)
//     {
//         cout << arr[i] << " ";
//     }cout<<endl;
// }

// void swapalternate(int arr[], int size)
// {
//     for (int i = 0; i < size; i += 2)
//     {
//         if (i + 1 < size)
//         {
//             swap(arr[i], arr[i + 1]);
//         }
//     }
// }

// int main()
// {  
//     int even[6] = {1, 2, 3, 4, 5, 6};
//     int odd[5]= {2,6,7,1,8}; 
//     swapalternate(even,6);
//     printarray(even,6);
   
//     swapalternate(odd,5);
//     printarray(odd,5);
//     return 0;
// }