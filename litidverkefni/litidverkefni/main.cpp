//
//  main.cpp
//  litidverkefni
//
//  Created by sverrir torfason on 27/11/2017.
//  Copyright © 2017 sverrir torfason. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    char c;
    ifstream fin;
    
    fin.open("textFile");
    
    if (fin.is_open()) {
        
        fin >> c;
        cout << c <<  endl;
        fin.close();
    }
    
    else {
        cout << "Unable to read from file!" << endl;
        
    }
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
