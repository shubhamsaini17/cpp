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
    
    while (j<=n)
    {   char ch='A'+i+j-2;
        cout<<ch<<" ";
        
        j++;
    }
    cout<<endl;
    i++;
}



 
    return 0;
}