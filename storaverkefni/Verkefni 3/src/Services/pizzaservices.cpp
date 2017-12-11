//
//  pizzaservices.cpp
//  storaverkefnisas
//
//  Created by sverrir torfason on 05/12/2017.
//  Copyright © 2017 sverrir torfason. All rights reserved.
//

#include "pizzaservices.h"
#include <iostream>
#include <vector>


Pizzaservices::Pizzaservices(){}

void Pizzaservices::add_pizza(Pizza& pizza) {

    Data out;
    out.add_pizza(pizza);

    //Data topp;
    //topp.add_toppings
    //   Data add_pizza(Pizza& pizza);
    // Data pizza.add_pizza(pizza);


}
void Pizzaservices::add_topping(Topping& topping) {


    Data topp;
    topp.add_topping(topping);



}

//Pizza Pizzaservices::get_pizza

