#include<iostream>
using namespace std;

int main()
{
    // for nxn 2d array
/* int n;
cin>>n;
// creation of 2d array
int** arr = new int*[n];
for (int i = 0; i < n; i++)
{
    arr[i] = new int[n];
}



// taking input
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cin>>arr[i][j];
    }
}

// taking output
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
*/

// creation of m x n 2d array

int row , column;
cin>>row>>column;

int** arr = new int*[row];
for (int i = 0; i < row; i++)
{
    arr[i] = new int[column];
}



// taking input
for(int i=0; i<row; i++){
    for(int j=0; j<column; j++){
        cin>>arr[i][j];
    }
}
cout<<endl;
// taking output
for(int i=0; i<row; i++){
    for(int j=0; j<column; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

// releasing memory
for (int i = 0; i < row; i++)
{
    delete [] arr[i];
}
delete []arr;

return 0;
}