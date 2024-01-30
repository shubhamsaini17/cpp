#include<iostream>
using namespace std;

class vechile{
    public:
        string brand ="ford";
        void honk(){
            cout<<"tuut, tuut! \n";
        }
};

class car:public vechile
{
public:
    string model = "mustang";
};


int main(){
 car mycar;
 mycar.honk();

 cout<<mycar.brand + " " + mycar.model;
}