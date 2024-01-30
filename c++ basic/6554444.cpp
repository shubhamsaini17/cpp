
#include <iostream>
using namespace std;

int get_min(int array[], int size)
{

  int mini = INT8_MIN;
 for (int i = 0; i < size; i++)
 {

    // if (array[i] <mini)
    //  mini = array[i];
    
    //or' 
      mini= min(mini,array[i]);
    
 
}
 return mini;
}
int get_max(int array[], int size)
{
   int maxi = INT8_MAX;
  for (int i = 0; i < size; i++)
  {
    // if (array[i] > maxi)
    // {    maxi = array[i];

      //or same
      maxi= max(maxi,array[i]); // compare maxi variable with each element of arry and store the value in maxi
       
  
  }
  return maxi;
  }

int main()
{

int size;
cout<< "array size: ";
  cin>>size;
  int array[size];
  

  for (int i = 0; i < size; i++)
  {
   cin>>array[i];
  }
  
  cout << " max element is: " <<get_max(array, size)<<endl;

  cout << " min. element is: " << get_min(array, size);
}
