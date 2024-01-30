#include<iostream>
#include<fstream>
// fstream class k anadar 
// 3 class ha {ofstream}- for create and write to file , {ifstream}-read from file
// {fstream}- a combination of ofstream andifstream : creates , read,write in files
using namespace std;

int main(){

 // Create a text string, which is used to output the text file
string myText;

// Read from the text file
ifstream MyReadFile("myfile.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) { // agar output mawords k bicha k space bhe print karna ha to use kra ge geline eg: helloshubham {without getline}-> hello shubham{with getline function}
  // Output the text from the file
  cout << myText;
}

// Close the file
MyReadFile.close();
}


//OR
/*
#include<iostream>
#include<fstream>
// fstream class k anadar 
// 3 class ha {ofstream}- for create and write to file , {ifstream}-read from file
// {fstream}- a combination of ofstream andifstream : creates , read,write in files
using namespace std;

int main(){
    
    ifstream fin; // fin object of ifstream represent input stream       // ifstream is a class inside fstream library , fin ifstream ka object ha , jo file read karna ma help kra ga
    char ch;
    fin.open("myfile.txt");  // fin object ki mada sa file read kar di jis folder ma vs code open ha usma
    ch=fin.get();
    while (!fin.eof()) // eof -end of file use to file end of file matlab jab tak file ka end nhiaa jata tab tak print karta rahi or ! use kyo ki ham print karna chata ha jab tak afile ka end na aya hao
    {
        cout<<ch;
        ch=fin.get();
      
    }
    
   
   fin.close(); //close the file myfile.txt
}
*/