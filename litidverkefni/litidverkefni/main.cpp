//
//  main.cpp
//  litidverkefni
//
//  Created by sverrir torfason on 27/11/2017.
//  Copyright © 2017 sverrir torfason. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
 
    string str;
    ifstream fin;
    int i = 0;
    
    fin.open("TextFile.txt");
    
    if (fin.is_open()) {
        while(!fin.eof() && i < 10){
            getline(fin, str);
           
            cout << str << endl;
       
            i++;
            
        }
        
        fin.close();
    }
    
    else {
        cout << "Unable to read from file!" << endl;
        
    }
    
  
    return 0;
}
