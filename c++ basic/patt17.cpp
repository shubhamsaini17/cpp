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
    char value='A'+n-i;
    while (j<=n)
    {   
        cout<<value<<" ";
        j++;
        value++;
    }
    cout<<endl;
    i++;
}



 
    return 0;
}