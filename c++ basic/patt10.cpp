#include <iostream>
using namespace std;
// i= row , j= column

int main() {
   
 int n; 
 cout<<"no of rows: ";
 cin>>n;

int i=1;
// char ch=65;

// while (i<=n)
// {
//     int j=1;
//     while (j<=n)
//     {
//         cout<<ch<<" ";
//         j++;
//     }
//     ch++;
//     cout<<endl;
//     i++;
// }

// or

while (i<=n)
{
    int j=1;
    while (j<=n)
    {   char str= 'A'+i-1;
        cout<<str<<" ";
        j++;
    }
 
    cout<<endl;
    i++;
}


 
    return 0;
}