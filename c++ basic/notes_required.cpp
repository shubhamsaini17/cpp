#include<iostream>
using namespace std;

int main(){

         int total;
         cin>>total;
         
         int rs100,rs50,rs20,rs1;
         
         int final_total=0+total;
        
        switch (1)
        {
        case 1: rs100=total/100;
                final_total = final_total-100*rs100;
                cout<<rs100<<" notes of 100"<<endl;
        case 2: rs50=final_total/50;
                final_total = final_total-50*rs50;
                cout<<rs50<<" notes of 50"<<endl;
        case 3: rs20=final_total/20;
                final_total = final_total-20*rs20;
                cout<<rs20<<" notes of 20"<<endl;        

        case 4: rs1=final_total/1;
                final_total = final_total-1*rs1;
                cout<<rs1<<" notes of 1"<<endl;   
        
        default:
            break;
            
    }
}