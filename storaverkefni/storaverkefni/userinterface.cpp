//
//  userinterface.cpp
//  storaverkefni
//
//  Created by sverrir torfason on 30/11/2017.
//  Copyright © 2017 sverrir torfason. All rights reserved.
//

#include "userinterface.hpp"
#include <iostream>
using namespace std;


UI::UI(){}
UI::~UI(){}
//userinterfaceið

void UI::veldunotanda(){
    char selection = '\0';
    
    while(selection != 'q') {
        
        cout << "s: salesman" << endl;
        cout << "b: baker" << endl;
        cout << "a: admin" << endl;
        cout << "u: user" << endl;
        cout << "q: quit" << endl;
        cin >> selection;
        
        if (selection == 's') {
            //ef s þá fer maður inní salesman viðmot a eftir að gera klasa fyrir það
        }
        else if (selection == 'a'){}
    } //byrja a að bua til fyrir admin sem er bara svipað og i litluverkefninu b lið bara valmynd, veldu til að bæta
    //við aleggi og breyta verði, breyta verði á pizzum, gera matseðil og eitthvað lata þetta fara í skrá sem salesman getur náð í.
    
}
