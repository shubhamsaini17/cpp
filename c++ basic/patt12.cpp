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
//         ch++;
//     }
    
//     i++;
//     cout<<endl;
// }

char value=65;

while (i<=n)
{
    int j=1;
     
    while (j<=n)
    {  
        cout<<value<<" ";
        value++;
        j++;
    }
    i++;
    cout<<endl;
}

 
    return 0;
}