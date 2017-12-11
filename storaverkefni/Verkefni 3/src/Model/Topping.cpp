//
//  Topping.cpp
//  storaverkefnisas
//
//  Created by sverrir torfason on 04/12/2017.
//  Copyright © 2017 sverrir torfason. All rights reserved.
//

#include "Topping.h"
//Topping::Topping(){}

Topping::Topping(){}
vector<string> Topping::getMeatTopping(){
    return meatToppings;
}
vector<string> Topping::getspiceToppings(){
    return this->spiceToppings;
}
vector<string> Topping::getveggiesToppings(){
    return veggiesToppings;
}
vector<string> Topping::getCheeseToppings(){
    return CheeseToppings;
}



Topping::Topping(vector<string> kjot,vector<string> krydd, vector<string> veggies, vector<string> ostur ){

    this -> meatToppings = kjot;
    this -> spiceToppings = krydd;
    this -> veggiesToppings = veggies;
    this -> CheeseToppings = ostur;


}
