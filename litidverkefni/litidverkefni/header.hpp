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
using namespace std;
class Superhero {
private:
    string name;
    int age;
    char superpower;
    
    
public:
    
    Superhero();
    Superhero(string name, int age, char superpower);
    
    
};




#endif /* header_hpp */
