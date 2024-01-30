// changing value of array inside the function will also change the values inside the actual array
#include<iostream>
using namespace std;

void update(int array[], int n){
    cout<<"inside the function"<<endl;

    array[1]=120;

    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }cout<<endl;

    cout<<"going back to main function"<<endl;

}

int main(){

int array[3]={1,2,3};

update(array,3);

cout<<"printing in the main function"<<endl;

for (int i = 0; i < 3; i++)
{
    cout << array[i]<<" ";
}
cout<<endl;

return 0;







}