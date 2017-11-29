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

int main() {
    
    string c;
    ifstream fin;
    char answer;

    fin.open("TextFile.txt");
    if (fin.is_open() ) {
        while (!fin.eof() ) {
            getline(fin, c);
            cout << c << endl;
        }
        fin.close();
    }
    
    else {
        cout << "Unable to read from file!" << endl;
        
    }
    
    
    
}
