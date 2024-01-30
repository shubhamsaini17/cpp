#include<iostream>
#include<fstream>
// fstream class k anadar 
// 3 class ha {ofstream}- for create and write to file , {ifstream}-read from file
// {fstream}- a combination of ofstream andifstream : creates , read,write in files
using namespace std;

int main(){
    
    ofstream fout;   //fout object represent output stream     // ofstream is a class inside fstream library , fout ofstream ka object ha , jo file create karna ma help kra ga
    fout.open("myfile.txt"); //open func ko call kiya taki file k object k sath assosiation ho jaya // fout object ki mada sa file create kar di jis folder ma vs code open ha usma
  
    fout<< "hello"; // fout object ki madada sa file ka andar hello write kar dea
    fout.close(); //close the file myfile.txt
}