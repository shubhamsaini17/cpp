// aga kis use na galat input dal dea to kya karna ha ya program kas response kara ga is ka lea he exception handling

#include<iostream>
using namespace std;
int demo_func(){
    throw 10;
}

int main()
{
    cout<<"welcome"<<endl;

    try
    {
        throw 19;
        cout<<"this is inside the try"<<endl;
    }
    catch(int e)
    {
        cout<<"this is inside the catch"<<endl;
    }
    cout<<"this sentence is outside"<<endl;
    
    cout<<endl;

    try
    {
        // throw 19; //we can also write the throw inside the function 
        cout<<"this is inside the try"<<endl;
    }
    catch(int e)
    {
        cout<<"this is inside the catch"<<endl;
    }
    cout<<"this sentence is outside";
}