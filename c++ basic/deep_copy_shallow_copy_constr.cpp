// this is shallow  copy
#include<iostream>
using namespace std;

class car{
private:
    int a,b,*p;
    
public:
    car(){
        p=new int;
    }
    void setdata(int i,int j,int z) {
        a=i;
        b=j;
        *p=z;
    }   
    void showdata(){
        cout<<"a: "<<a<<" "<<"b: "<<b;
    }
    car(car &d){
        a=d.a;
        b=d.b;
        p=new int;
        *p=*(d.p);
    }
    ~car(){
        delete p;
    }
};
int main(){

    car c1;
    c1.setdata(1,2,5);
    car c2(c1);  // shallow copy using copy constructor {copy constructor ham nhi banaya ge to complkier apna app bana da ga ,, lain ham samjana k lea banaya ge}
    //c2=c1;  // if we assign c2 =c1 after declaration then it do shallow copy using implicit copy assignment operator
   c2.showdata();
}



// #include<iostream>
// using namespace std;

// class car{
// private:
//     int a,b;
    
// public:
//     void setdata(int i,int j) {
//         a=i;
//         b=j;
//     }   
//     void showdata(){
//         cout<<"a: "<<a<<" "<<"b: "<<b;
//     }
// };
// int main(){

//     car c1;
//     c1.setdata(1,2);
//     car c2=c1;
//    c2.showdata();
// }