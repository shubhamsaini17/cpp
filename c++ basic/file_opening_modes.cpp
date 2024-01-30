/*type of FILE OPENING MODES IN C++
ios::in            input/read
ios::out            output/write
ios::app             append
ios::ate           upadate
ios::binary        binary(file ko ninary ma show ya store karna k lea)
*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    
    ofstream fout;  
     fout.open("myfile.txt",ios::app); // ios::app mode ka matalb append yani file k end ma naya word dal dana  
     
    fout<< "hello"; 
    fout.close(); 
    }