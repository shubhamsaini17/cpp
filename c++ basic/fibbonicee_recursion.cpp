//fibonacci using recursion
//fibonacci sequence ma sa kon se position pa kon se term hogi find?
// example :- 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181 
// formula used to find tearm on a perticular position = Fn = Fn-1 + Fn-2
// #include<iostream>
// using namespace std;

// int fib(int n){
//     if(n<=2){
//         return 1;
//     }
//     return fib(n-2) + fib(n-1);

// }

// int main()
// {
//     int a;
//     cout<<"please enter a position ";
//     cin>>a;
//     cout << "the term in fibonacci sequnce at position "<<a <<" is: "<<fib(a)<<endl;
    
// }

#include<iostream>
using namespace std;
int main()
{
int count=0;
int n=10;
for (int i = 2; i < n; i++)
{
    if ((n-1)%i!=0)
    {
        cout<<n<<' ';
        count++;
        n--;
    }
    
}
cout<<count;
return 0;
}