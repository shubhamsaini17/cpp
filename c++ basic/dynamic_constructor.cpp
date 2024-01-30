// dynamic constructor = jab class ka andar constructor ma pointer banaya jaya or usma data store kiya jaya so iska matalb is data ko accces karna k tarika bas wo pointer ha usak koi name nhi ha.
//constructor ka davara object ka dovara create hona vali memory k creation karna dynamically{matab us perticular memory ko bas constructor k andar pointer sa he acces kiya ja saka } usa he dynamic constructor khataha ha
#include<iostream>
using namespace std;


class A{
    private:
    int a;
    int b;
    int *p;
    public:
    A(){
        a=0;
        b=0;
        p=new int;
    }
    A(int x,int y,int z){
        a=x;
        b=y;
        p=new int;
        *p=z;

    }

};

int main(){
    A o1,o2,o3(4,9,8);
}