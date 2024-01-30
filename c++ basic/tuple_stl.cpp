#include <iostream>
#include<tuple>
using namespace std;

class student
{
private:
    string name;
    int age;

public:
    void setstudent(string s, int a)
    {
        name = s;
        age = a;
    }
    void showstudent()
    {
        cout << "\nname: " << name;
        cout << "\nage: " << age;
    }
};

int main()
{
    tuple<string, int, int> t1; // tuple name ki pre definded class jiska object t1
    t1 = make_tuple("kajal", 22, 21);
    cout<<get<0>(t1)<<" ";
    cout<<get<1>(t1)<<" ";
    cout<<get<2>(t1)<<" ";
  
}