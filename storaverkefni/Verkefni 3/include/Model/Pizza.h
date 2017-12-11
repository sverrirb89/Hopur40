//
//  Pizza.hpp
//  storaverkefnisas
//
//  Created by sverrir torfason on 04/12/2017.
//  Copyright © 2017 sverrir torfason. All rights reserved.
//
#include <vector>
#ifndef Pizza_hpp
#define Pizza_hpp
#include <stdio.h>
#include <string>

using namespace std;
#include <iostream>
#include "Topping.h"

class Pizza {
public:
    string getName();
    Pizza();
  //  Pizza(string nafn, int size, string alegg,string annad);
    Pizza(string nafn, int size, string verd, vector<string> topping);
    void setName(string newName);
    int getsize();
    vector<string> gettoppings();
    void setsize(int number);
    string getverd();
    void setverd(string number);
    friend ostream& operator << (ostream& out, Pizza& pizza);
private:
    string nafn_pizzu;
    int size;
    string verd;
    //string others;
    vector<string> topping;



};







#endif /* Pizza_hpp */
