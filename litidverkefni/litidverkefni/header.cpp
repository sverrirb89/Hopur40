//
//  header.cpp
//  litidverkefni
//
//  Created by sverrir torfason on 28/11/2017.
//  Copyright © 2017 sverrir torfason. All rights reserved.
//

#include "header.hpp"

using namespace std;


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

string Superhero::getName(){
    return name;
}
void Superhero::setName(string newName){
    name = newName;
}
int Superhero::getAge(){
    return age;
}
void Superhero::setAge(int number){
    age = number;
}
char Superhero::getSuperPower(){
    return superpower;
}
void Superhero::setSuperPower(char super){
    superpower = super;
}


ostream& operator << (ostream& out, Superhero& hero){
    
    out << hero.getName() << " ";
    out << "("<<hero.getAge() <<") : " ;
    
    
    if(hero.getSuperPower() == 'f'){
    out << "Flying" << endl;
    }
    else if (hero.getSuperPower() == 'g'){
        out << "Giant" << endl;

    }
    else if (hero.getSuperPower() == 'h'){
        out << "Hacker" << endl;
        
    }
    else if (hero.getSuperPower() == 'n'){
        out << "None" << endl;
        
    }
    else {
        
        out << "Weakling" << endl;
    }
        return out;
}

istream& operator >> (istream& in, Superhero& hero){
    in >> hero.name >> hero.age >> hero.superpower;
    return in;
    
}
