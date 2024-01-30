 // when to use virtual function
// virtual functionare use when we have to do late binding 
// is compiler ko ya pata chal jaya ge ki is function ki LATE BINDING karni ha 
//to call k wakat pointer k datatype to adhaar nhi manajaya ge(yani uska datatype ko dak k nhi decision laga compiler ki muja shiftgear function kon se class vala chalana ha ) balki pointer jis object k point kar raha us base pa shift gear func. call hoga 
// isi ko virtual fucntion bolat , matalab late binding karna k lea 

#include<iostream>
using namespace std;

class A{
    // *_vptr {ya vpointer har object k lea alag bana ga kisi class k andar }jitnA object unka utna he alag vptr// is pointer ko compiler khud bana daga or ya Vtable ko point kra ga
    // v table ak array ha jisma bhot sara pointers ha jo ki virtual func. k address ko point kar rah ha {jitna virtual func. kisi class ma utna he pointer }
    public:
    void f1(){}
virtual void f2(){}
virtual void f3(){}
virtual void f4(){}
};

class B:public A
{
    public:
    void f1(){}
    void f2(){}
    void f4(int x){}
    
};
int main()
{
    A *p;
    B o2;
    p=&o2;
    p->f1(); //early binding
    p->f2(); //late binding
    p->f3(); //late binding
    p->f4(); //late binding
   // p->f4(5); //early binding {errror}
    
}
