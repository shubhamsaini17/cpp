#include<iostream>
// #include<stack>

using namespace std;

class stack{
    public:
    int *arr;
    int size;
    int top;

    // behaviour
    stack(int size){
        this->size = size;
        top =-1;
        arr = new int[size];
    }

    void push(int element){
        if (size-top > 1)
        {   top++;
            arr[top] = element;
        }
        else{
            cout<<"stack overFlow"<<endl;
        }
    }

    void pop(){
         if (top>=0)
        {   
            top--;
        }
        else{
            cout<<"stack underFlow"<<endl;
        }
    }

    int peek(){
        if (top>=0)
            return arr[top];
        else
            cout<<"stack is empty"<<endl;
            return -1; 
        }

    void isempty(){
        if(top == -1){
            cout<<"stack is empty"<<endl;
        }
        else{
            cout<<"stack is not empty"<<endl;
        }
    }

};
int main()
{
/*
stack<int> s;

s.push(4);
s.push(41);

// s.pop();
// s.pop();
if(s.empty()){
cout<<"stack is empty"<<endl;
}
else
{
cout<<"stack is not empty"<<endl;
}
cout<<"size of stack: "<<s.size()<<endl;
s.emplace(34);
cout<<"size of stack: "<<s.top();
*/

stack s(8);
s.push(3);
s.peek();
// s.push(4);
// s.push(5);
// s.push(6);
// s.push(7);
// s.push(1);
// s.pop();
// s.pop();
// s.peek();
// s.isempty();
// s.pop();
// s.peek();
return 0;
}
