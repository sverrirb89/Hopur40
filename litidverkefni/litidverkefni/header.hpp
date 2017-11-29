//
//  header.hpp
//  litidverkefni
//
//  Created by sverrir torfason on 28/11/2017.
//  Copyright © 2017 sverrir torfason. All rights reserved.
//

#ifndef header_hpp
#define header_hpp
#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;

class Superhero {
private:
    string name;
    int age;
    char superpower;
    
    
public:
    
    Superhero();
    Superhero(string name, int age, char superpower);
    string getName();
    void setName(string newName);
    int getAge();
    void setAge(int number);
    char getSuperPower();
    void setSuperPower(char super);
    friend ostream& operator << (ostream& out, Superhero& hero);
    friend istream& operator >> (istream& in, Superhero& hero);
};




#endif /* header_hpp */
