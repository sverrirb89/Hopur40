//
//  userinterface.hpp
//  storaverkefni
//
//  Created by sverrir torfason on 30/11/2017.
//  Copyright © 2017 sverrir torfason. All rights reserved.
//

#ifndef userinterface_hpp
#define userinterface_hpp
#include <string>
using namespace std;
class UserInter {
public:
    void veldunotanda();
    UI();
    ~UI();
    string getName();
    
    void setName(string newName);
    int getsize();
    void setsize(int number);
    string getalegg();
    void setalegg(char super);


private:
    string nafn_pizzu;
    int size;
    string alegg;
    string others;

};



#include <stdio.h>

#endif /* userinterface_hpp */
