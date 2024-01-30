#include <iostream>
using namespace std;
// i= row , j= column

int main() {
   
 int n; 
 cout<<"no of rows: ";
 cin>>n;

int i=1;
char value=65;
while (i<=n)
{
    int j=1;
    while (j<=i)
    {
        cout<<value;
        j++;
         value++;
    }
   
    i++;
    cout<<endl;
}




 
    return 0;
}