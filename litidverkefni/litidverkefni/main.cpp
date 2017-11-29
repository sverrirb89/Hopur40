#include <iostream>
#include <fstream>
#include "header.hpp"
using namespace std;


int main() {
    
    
    Superhero batman("jonni", 28, 'h');
   
    
    string str;
    ifstream fin;
  
    ofstream fout;
   
    fin.open("TextFile.txt");
    
  
        if (fin.is_open()) {
            fout << batman;
            
    fin.close();
    
   
        }
            return 0;
}

