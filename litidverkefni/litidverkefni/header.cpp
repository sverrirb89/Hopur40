//
//  header.cpp
//  litidverkefni
//
//  Created by sverrir torfason on 28/11/2017.
//  Copyright © 2017 sverrir torfason. All rights reserved.
//

#include "header.hpp"



Superhero::Superhero(){
    
    this->name = "";
    this->age = 0;
    this->superpower = 'n';
}

Superhero::Superhero(string name, int age, char superpower){
    this-> name = name;
    this->age = age;
    this->superpower = superpower;
    
}
