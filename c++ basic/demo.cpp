// #include<iostream>
// using namespace std;

// int sum(int n){
//     if(n==1){
//         return 1;

//     }
//     return (n *sum(n-1));
// }
// int main()
// {
// int n=5;
// cout<<sum(n);
// return 0;
// }


// #include<iostream>
// using namespace std;

// int sumOf(int i,int sum){
//     if(i<1){
//         return sum;
//     }
//     sumOf(i-1,sum+i);
// }

// int main()
// {

// int i=3;
// int sum=0;

// cout<<sumOf(i,sum);
// return 0;
// }


#include<iostream>
using namespace std;
bool func(int i , string &s){

    if(i>= s.size()/2) return true;
    if(s[i] != s[s.size()-i-1] ) return false;
    return func(i+1,s);
}

int main()
{

string s = "madam";
cout<<func(0,s);

return 0;
}