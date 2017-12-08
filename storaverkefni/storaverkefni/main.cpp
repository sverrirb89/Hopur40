//
//  main.cpp
//  storaverkefni
//
//  Created by sverrir torfason on 30/11/2017.
//  Copyright © 2017 sverrir torfason. All rights reserved.
//
#include <stdio.h>
#include <iostream>
#include "header.hpp"
#include "userinterface.hpp"
#include "toppings.hpp"
#include "makepizza.hpp"
#include <fstream>
using namespace std;
int main(int argc, const char * argv[]) {
    ofstream fout;
    string name;
    int age;
    char power;

    UI hetja;
    
    hetja.veldunotanda();
    fout.open("adminchange.txt", ios::app);
    if (fout.is_open()) {
        
        fout << hetja;
        
        fout.close();
    }
    
    cout << hetja << endl;
    
    
    
    return 0;
}
