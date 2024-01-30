// using swap function

/* #include<iostream>
using namespace std;

int swap_alternate(int array[], int size)
{
    for (int i = 0; i < size; i+=2)
    {
        if(i+1<size){
        swap(array[i],array[i+1]);
        }
    }
     for (int i = 0; i <size; i++)
    {  
      cout<<array[i]<<" ";
    }
    
}
int main()
{

    int array[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    swap_alternate(array,9);
}

*/

//or

// without using swap function

#include<iostream>
using namespace std;

int swap_alternate(int array[], int size)
{
    for (int i = 0; i <size; i+=2)
    {   
        if (i+1<size)
        {
        int temp= array[i+1];
        array[i+1]=array[i];
        array[i]=temp;
        }
        
    }
     for (int i = 0; i <size; i++)
    {  
      cout<<array[i]<<" ";
    }
    
}
int main()
{

    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9,0};
    swap_alternate(array,10);
}