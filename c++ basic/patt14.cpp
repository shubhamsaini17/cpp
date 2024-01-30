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
        cout<<value<<" ";
        j++;
    }
    value++;
    cout<<endl;
    i++;
}

// or 

// while (i<=n)
// {
//     int j=1;
//     while (j<=i)
//     {   char ch='A'+i-1;
//         cout<<ch<<" ";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

 
    return 0;
}