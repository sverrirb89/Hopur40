//
//  Userinterface.hpp
//  storaverkefnisas
//
//  Created by sverrir torfason on 04/12/2017.
//  Copyright © 2017 sverrir torfason. All rights reserved.
//

#ifndef Userinterface_hpp
#define Userinterface_hpp
#include "Pizza.h"
#include "Topping.h"
#include <stdio.h>

#include <string>
#include <vector>
#include "pizzaservices.h"
using namespace std;


class Userinterface {
    public:
        void veldunotanda();
        //Userinterface();
        void validate_user_input();
        void promt_salesman();
        void validate_salesman(char input, Pizza pizza);
        vector<string> getToppingsOnPizza();
        void setToppingsOnPizza(vector<string> toppings);
        Pizza makepizza();
        Topping maketopping();
        void get_pizza_menu(Pizza pizza);

    private:
        vector<string> toppingsOnPizza;
        Pizzaservices pizza_services;
};

#endif /* Userinterface_hpp */
