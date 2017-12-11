//
//  Topping.hpp
//  storaverkefnisas
//
//  Created by sverrir torfason on 04/12/2017.
//  Copyright © 2017 sverrir torfason. All rights reserved.
//

#ifndef Topping_hpp
#define Topping_hpp
#include <stdio.h>
#include "Pizza.h"

class Topping {
private:
    string nafn;
    string verd;
     vector<string> toppings;
    vector<string> meatToppings;
    vector<string> spiceToppings;
    vector<string> veggiesToppings;
    vector<string> CheeseToppings;
public:
    Topping(vector<string> kjot,vector<string> krydd, vector<string> veggies, vector<string> ostur );
    Topping();
    vector<string> getMeatTopping();
    vector<string> getspiceToppings();
    vector<string> getveggiesToppings();
    vector<string> getCheeseToppings();

};


#endif /* Topping_hpp */
