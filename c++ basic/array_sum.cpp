// sum of all the elements of array
#include <iostream>
using namespace std;

int sum_of_array(int array[] , int size){

    int sum =0;
    for (int i = 0; i < size; i++)
    {
        sum+=array[i];
    }
    
    return sum;

}

int main()
{

    int size;
    cout << "enter size of  array: ";
    cin >> size;

    int array[size];

    for (int i=0; i<size; i++){
        cin>>array[i];
    }

    cout <<"sum of array you formed is: "<<sum_of_array(array,size);



}