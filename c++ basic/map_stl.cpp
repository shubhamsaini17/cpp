//{numeric array}- numeric array matlab jis array ma index numbers ki for ma ho , jasa index 0 pa 5 raka ha , 1 index pa 10 etc
// {associative array}- lakin associative array ma ham khud ka index da sakta ha example - first value k  access kana k lea index name is "pankaj" eg: array1["pankaj"] to pankaj ka marksa print ho jaya ge
// associative array ma indexes number , string kuch bhe ho stakta ha // index sorted order ma hoga according to dictionary

#include <iostream>
#include <map>
using namespace std;

int main()
{

    map<int, string> customer;

    customer[100] = "atul"; // 100 is index no. and atul is value stored at that index
    customer[123] = "bahisk";
    customer[145] = "aditiya";
    customer[171] = "shaiditya";
    customer[200] = "rajesh";
 
    // end way creating object and at same time assign values
    map<int, string> custdetail{{100, "kajal"}, {123, "monika"}, {142, "vanshika"}, {145, "savita"}, {171, "riya"}, {200, "khushi"}}; // assigned value of key value pair at the time of declaration

    // print without use iterators
    cout << customer[100]<<endl;
    cout<< customer[101]; //print blank kyo ki asa koi index ha he nhi
        cout << customer[123]<<endl;
    cout << customer[145]<<endl;

    // print through iterators
    map<int,string>::iterator p=customer.begin();
    while (p!=customer.end())
    {
        cout<<p->second<<endl;  // p pointer point kar rah ha map ma first kwy:values pair ko , to hamna to bas value print karnai ha to ham p-> second likha ga values print karna k lea , p->first lik ga jab key print karna ho
        p++;
    }

    // at func use
    cout<<endl << customer.at(145);
    // size function for getting size

     cout<<endl << customer.size();

     // empty function to check ki map empty to nhi ha

    cout<<endl << customer.empty(); // empty hota to return karta 1

    // insert function to insert data in map

    customer.insert(pair<int,string>(200,"cahsma"));

    // clear function to clear all the values of map
    customer.clear();
}
