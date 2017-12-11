//
//  pizzaservices.hpp
//  storaverkefnisas
//
//  Created by sverrir torfason on 05/12/2017.
//  Copyright © 2017 sverrir torfason. All rights reserved.
//

#ifndef pizzaservices_hpp
#define pizzaservices_hpp
//#include "Userinterface.hpp"
#include "Pizza.h"
#include <stdio.h>
#include "data.h"
class Pizzaservices {

public:
    Pizzaservices();
    void add_pizza(Pizza& pizza);
 //   Data add_pizza(Pizza& pizza);
    void add_topping(Topping& topping);
};



#endif /* pizzaservices_hpp */
