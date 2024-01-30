#include <iostream>
#include <string.h>
using namespace std;

class student
{
private:
    int roll_no;
    char name[20];

    class address
    {
        int houseno;
        char street[20];
        char city[20];
        char state[20];
        char pincode[20];

    public:
        void setaddress(int h, char *s, char *c, char *st, char *p)
        {
            houseno = h;
            strcpy(street, s);
            strcpy(city, c);
            strcpy(state, s);
            strcpy(pincode, p);
        }
        void showaddress(){
            cout<<houseno<<endl;
            cout<<street<<" ";
            cout<<city<<endl;
           cout<<state<<endl;
            cout<<pincode<<endl;
        }
    };
    address add; // object of address class
public:
    void setrollno(int r)
    {
        roll_no = r;
    }
    void setname(char *n)
    {
        strcpy(name, n);
    }
    void setaddress(int h, char *s, char *c, char *st, char *p)
    {
        add.setaddress(h, s, c, st, p);
    }
    void showstudent()
    {
        cout << "student data" << endl;
        cout << roll_no << endl;
        cout << name << endl;
        add.showaddress();
    }
};

int main()
{
    student s1;
    s1.setrollno(10);
    s1.setname("aman");
    s1.setaddress(323,"hari nagar","bhopal","24784","HR");
    s1.showstudent();
}