//
//  Pizza.cpp
//  storaverkefnisas
//
//  Created by sverrir torfason on 04/12/2017.
//  Copyright © 2017 sverrir torfason. All rights reserved.
//
#include <fstream>
#include "Pizza.h"
#include <string>
using namespace std;
Pizza::Pizza(){};
/*Pizza::Pizza(string nafn, int size, string alegg,string annad){

    this->nafn_pizzu = nafn;
    this-> size = size;
    this-> alegg = alegg ;
    this->others = annad;
} */
Pizza::Pizza(string nafn, int size, string verd,vector<string> topping){
    this->nafn_pizzu = nafn;
    this->size = size;
    this->verd = verd ;
    this->topping = topping;
}

vector<string> Pizza::gettoppings(){
    return topping;
}

string Pizza::getName(){
    return nafn_pizzu;
}
void Pizza::setName(string newName){
    nafn_pizzu = newName;
}
int Pizza::getsize(){
    return size;
}
void Pizza::setsize(int number){
    size = number;
}
string Pizza::getverd(){
    return verd;
}
void Pizza::setverd(string numb){
    verd = numb;
}
 ostream& operator << (ostream& out, Pizza& pizza){
     vector<string> temp = pizza.gettoppings();
     out << "Nafn pizzu: " <<pizza.getName() << "," << "Stærð í tommum: " <<  pizza.getsize() << "," << "Verð á pizzu er: " << pizza.getverd() << "," << endl;
      for (int i = 0; i < temp.size(); i++) {
          cout << temp[i] << " ";
      }

     return out;
 }
