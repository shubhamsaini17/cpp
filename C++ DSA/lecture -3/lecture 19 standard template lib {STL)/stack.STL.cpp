#include<iostream>
#include<stack>

// stack -- last in first out {LIFO}
using namespace std;
int main()
{

    stack<string> stack1;

    stack1.push("shubham");
    stack1.push("saini");
    stack1.push("king");

    cout<<"top element / jo last ma dala tha wo elemet / sabsa uper kon se element ha: "<<stack1.top()<<endl;

    stack1.pop(); // last in first out /pop

 cout<<" top element after 1 time pop"<<endl;
    cout<<"top element / jo last ma dala tha wo elemet / sabsa uper kon se element ha: "<<stack1.top()<<endl;

    cout<<"size of satck:  "<<stack1.size()<<endl;



    cout<<"empty or not : "<<stack1.empty()<<endl;
    // if return 0- false not empty
    // if return 1- true is empty
    
return 0;
}