#ifndef data_hpp
#define data_hpp
#include <stdio.h>
#include "Pizza.h"
class Data {
private:



public:
    Data();
    void add_pizza(Pizza& pizza);
    void add_topping(Topping& topping);
    void read_from_file();
};




#endif /* data_hpp */
