#include <iostream> 
#include <fstream> 
  
using namespace std; 
  

int main() 
{ 
    
  
  
    string line; 
  
 
  
  

    ifstream fin; 
  
    
    fin.open("1.c"); 

    while (fin) { 
  
      
        getline(fin, line); 
  
        cout << line << endl; 
    } 

  
    return 0; 
} 
