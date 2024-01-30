#include<iostream>
#include<vector>
using namespace std;

int main(){

    
    vector<int>v1{10,20,30}; //initial capacity 3

    vector <char>v2(4); // 4 length vector ##size

    vector<int>v3(5,1); // 5 capacity , 1 value har ak postion pa chala jayai ge vector ma
    vector<string>v4(4,"hello"); // same value in all position of array
    
    for (int i = 0; i < 4; i++)
    {
        cout<<v4[i]<<endl;
    }
    
    vector<int>v5;
    cout<<"currrent capacity: "<<v5.capacity()<<endl; // v1 ki kitnai capacity ha
    v5.push_back(10);
    cout<<"currrent capacity: "<<v5.capacity()<<endl;
    v5.push_back(11);
    cout<<"currrent capacity: "<<v5.capacity()<<endl;
    v5.push_back(12);
    cout<<"currrent capacity: "<<v5.capacity()<<endl;
    
    for (int i = 0; i <=9; i++)
    v5.push_back(10*i);
    v1.pop_back();
    cout<<"capacity after pop"<<endl;
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();

    cout<<"currrent capacity: "<<v5.capacity()<<endl; // pop karna sa capacity reduce nhi hogi
        cout<<"total no of elements: "<<v5.size()<<endl;  // size function tell how many elements are currently present in the vector

    
// {size function} tell how many elements are currently present in the vector
// {capacity  function} tell kis vecto ma total kitna element store karna kis capacity ha
    for (int i = 0; i <v5.size(); i++)
    {
    cout << v5[i]<<endl;    }

    // v5.clear();            // {clear funciton} vector ka sabhi elements ko delete ka da ga ## elements delete hojaya ga lakin capacity uthni he raha ge
    cout<<"currrent capacity: "<<v5.capacity()<<endl; 
        cout<<"total no of elements: "<<v5.size()<<endl;

        // at function

       cout<<"value at index 0 : "<< v5.at(0)<<endl;

       cout<<"first value is: "<<v5.front()<<endl;
        cout<<"last value is: "<<v5.back();

    // to insert values in bettween of the array
    // for that we have to use iterators

    vector<int>:: iterator it=v5.begin();
    v1.insert(it+2,35); // to insert after 2nd position in the vector

     for (int i = 0; i <v5.size(); i++)
    {
    cout << v5[i]<<endl;    }


}