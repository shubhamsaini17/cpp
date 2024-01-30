#include<iostream>
using namespace std;

class student{
    private:
    string name;
    int age;
    public:
    void setstudent(string s,int a){
        name=s;
        age=a;
    }
    void showstudent(){
        cout<<"\nname: "<<name;
        cout<<"\nage: "<<age;
    }

};

int main(){
pair<string,int>p1;
pair<string,string>p2;
pair<string,float>p3;
pair<string,student>p4;

p1=make_pair("kajal",22);
p2=make_pair("hello","kajal");
p3=make_pair("book2",3222.1f);

student s1;
s1.setstudent("kajal",23);
p4=make_pair("1",s1);

cout<<"pair 1"<<endl;
cout<<p1.first<<" "<<p1.second<<endl;

cout<<"pair 2"<<endl;
cout<<p2.first<<" "<<p2.second<<endl;
 
cout<<"pair 3"<<endl;
cout<<p3.first<<" "<<p3.second<<endl;

cout<<"pair 4"<<endl;
cout<<p4.first<<" ";

student s2=(p4.second);

s2.showstudent();

}