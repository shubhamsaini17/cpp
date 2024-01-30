#include <iostream>
using namespace std;
// i= row , j= column

int main() {
   
 int n; 
 cout<<"no of rows: ";
 cin>>n;

int i=1;

while (i<=n)
{
    int j=1;
    while (j<=i)
    {   char value='A'+i+j-2;
        cout<<value<<" ";
        j++;
    }
    cout<<endl;
    i++;
}



 
    return 0;
}