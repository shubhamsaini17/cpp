#include<iostream>
#include<list> // to use list we have to include list header
using namespace std;

int main(){

    list<int> list1;
    list<int> list2{1,2,32,13,23};   // list1 is a list type object jisma int type ki value rak sakta ha
    list<string> list3{"hello","world"};

    // list ma bich ma sa value print nhi kara sakta
    // only form beigining or from ending with the help of iterators
    // iterator ak type ka pointer he ha jo arry, list , vector ma loctions ko point kra ga
    
    list<int>:: iterator p=list2.begin(); // p iterator ka name ha like a pointer

list2.push_back(2932);
    list2.push_front(932);

   

    list2.pop_back();
    list2.pop_front();
    
  
cout<<endl;
    cout<<"total value in the list are: "<<list2.size()<<endl;

// remove function

list2.remove(32); // 32 is removed fro list2

  while (p!=list2.end())
    {
        cout<<*p<<" ";
        p++;
        
    }
cout<<endl;
list2.clear();

cout<<"total size after clear function: "<<list2.size();
}