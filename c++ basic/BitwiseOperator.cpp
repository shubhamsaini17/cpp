#include<iostream>
using namespace std;

int main(){

int a=6;
int b=3;

cout<<"a&b: "<<(a&b)<<endl;  //and 
cout<<"a|b: "<<(a|b)<<endl;  //or
cout<<"a^b: "<<(a^b)<<endl; //xor
cout<<"~b: "<<~b<<endl;  //not

// left shift
//  5<<1   mean left shift 5 by 1 bit =      5 in binary in 32 bits   -> 0000000000.....101   to left shift ho jaya ge ak ak bit keft ki side
                                                                      // eg = 000000000000.....1010 or ya ban gya 1010 matlab 10 number.
 // can be possible in majority cases =>  kis left shift karna ka baad answer 2 sa multipy ho ka aya
 // eg: 5<<1  => 5x2 >> after left shift 1010 => 10
 // eg 3<<2  => 3x2x2 => 12 {after 2 left shift of binary no. 3}

// right shift 
// 5>>2  mean right shift 5 by 2 bit to right =>  5 in binary in 32 bits   -> 0000000000.....101    to right shift ho jaya ge do do bit right ki side
//                                                                          eg: 0000000......001 or fir ya ban gya => 1 {5/2 =>2 in case of int = 1}
// means in majority cases jitna right shift karna ko bola uthi bar 2 sa divide ho jay ga
// eg: 5>>1  to 5/2  --5 ak bar 2 sa divide => answer is  5/2 => 1 
// eg: 5>>2   to 5/2x2 or 5/2 = 2/2  answer =1 after right shift by 2;



// during left(<<) and right shift(>>) if number is + positive number only then jo padding hogi during shift to usma 00 kitna bhe add kar sakta ha  
// by when number is neagtive like -5>>2 to usma padding bits 00 nhi hogi , -ve shift ma padding compiler apni marji sa kra ga 0 ya 1 kuch bhe




// right shift by 
cout<<(17>>1)<<endl; //17/2 =8
cout<<(17>>2)<<endl; // 17/2x2 =4

// left shift
cout<<(19<<1)<<endl; // 19 x2 =38
cout<<(21<<2)<<endl;  // 21x2x2 =84

}
