//
//  Userinterface.cpp
//  storaverkefnisas
//
//  Created by sverrir torfason on 04/12/2017.
//  Copyright © 2017 sverrir torfason. All rights reserved.
//

#include "Userinterface.h"
#include "Pizza.h"

//
//  userinterface.cpp
//  storaverkefni
//
//  Created by sverrir torfason on 30/11/2017.
//  Copyright © 2017 sverrir torfason. All rights reserved.
//

#include <fstream>
#include <iostream>
using namespace std;



void Userinterface::veldunotanda(){
        char selection = '\0';

        cout << "s: salesman" << endl;
        cout << "b: baker" << endl;
        cout << "a: admin" << endl;

        cin >> selection;

        if (selection == 's') {
            promt_salesman();
        }
        else if (selection == 'a') {
            char input;
            cout << "welcome admin what do you want to add or change ? " << endl;
            cout << "select 1. to... Add pizza to the menu" << endl;
            cout << "select 2. to add topping on the topping menu. name::(prize)" << endl;


            cout << "Can you see me" << endl;
            cin >> input;
            if (input == '1'){   ///buatilpizzuamenu-i
                validate_user_input();
            }

            else if (input == '2'){
                //buatiltoppingsmenu
                Pizzaservices servic;
                Userinterface interfac;
                Topping tempTopping = interfac.maketopping();
                servic.add_topping(tempTopping);
            }

            else if (selection == 'b'){
                cout << "bakari to be continued"  << endl;
            }

            else
                cout << "error" << endl;
            }
}

void Userinterface::validate_user_input(){
    char input;
    Pizza god;
cout << "Can you see me now, press 1 for pizzamenu 2 for topping" << endl;
    //cout << "What about now" << endl;
   // cout << "can you input number one for me honey?" << endl;
    cin >> input;

   if (input == '1'){

        Pizzaservices service;
        Userinterface interface;
        Pizza tempPizza = interface.makepizza();
        service.add_pizza(tempPizza);
   }

   else if (input == 2){
   }

 //   else{
  //      cout << "to be continued" << endl;
   // }

}

vector<string> Userinterface::getToppingsOnPizza(){
    return toppingsOnPizza;
}

//void Userinterface::setToppingsOnPizza(vector<string> test){



Pizza Userinterface::makepizza() {
    vector<string> vectorOfToppings;
    string nafnpizzu = "";
    string verd = "";
    cout << " Nafn pizzu " << endl;
    cin >> nafnpizzu;
    int size = 0;
    cout << " staerd " << endl;
    cin >> size;

   char cont = 'y';
    while (cont == 'y'){
       string alegg = "";
        cout << " alegg " << endl;
        cin >> alegg;
        vectorOfToppings.push_back(alegg);
        //pizza.set
        cout << "Do you wish to put another topping on your pizza ???" << endl;
        cout << "y for Yes, n for no" << endl;
        cin >> cont;
    }
    cout << " price " << endl;
    cin >> verd;
    Pizza pizza(nafnpizzu, size, verd, vectorOfToppings);

    return pizza;
}


 Topping Userinterface::maketopping(){
   vector<string> meattopping;
     vector<string> cheesetopping;
     vector<string> spicetopping;
     vector<string> veggietopping;
 char input;
     cout << " choose 1 to add on meat menu" << endl;
    cout << " choose 2 to add cheese on the topping menu";
     cout << " choose 3 to add spice on the topping menu";
     cout <<  "choose 4 to add veggies on the topping menu";
     cin >> input;
 if(input == '1'){
 char cont = 'y';
 while (cont == 'y'){
 string alegg = "";
 cout << " kjotalegg " << endl;
 cin >> alegg;
 meattopping.push_back(alegg);

 cout << "Do you wish to put another kjotalegg on your toppingsmenu ???" << endl;
 cout << "y for Yes, n for no" << endl;
 cin >> cont;
 }
 }


 else if (input == '2'){
 char cont = 'y';
 while (cont == 'y'){
 string alegg = "";
 cout << " ostur " << endl;
 cin >> alegg;
 cheesetopping.push_back(alegg);

 cout << "Do you wish to put another kjotalegg on your toppingsmenu ???" << endl;
 cout << "y for Yes, n for no" << endl;
 cin >> cont;
 }
 }


 else if (input == '3'){
 char cont = 'y';
 while (cont == 'y'){
 string alegg = "";
 cout << " veggies " << endl;
 cin >> alegg;
spicetopping.push_back(alegg);

 cout << "Do you wish to put another kjotalegg on your toppingsmenu ???" << endl;
 cout << "y for Yes, n for no" << endl;
 cin >> cont;
 }
 }

 else if (input == '4'){
 char cont = 'y';
 while (cont == 'y'){
 string alegg = "";
 cout << " veggies " << endl;
 cin >> alegg;
 veggietopping.push_back(alegg);

 cout << "Do you wish to put another kjotalegg on your toppingsmenu ???" << endl;
 cout << "y for Yes, n for no" << endl;
 cin >> cont;
 }
 }

 Topping topping(meattopping, cheesetopping, spicetopping, veggietopping );
 return topping;
 }

void Userinterface::promt_salesman()
{
    cout << "Welcome salesman! What would you like to do?" << endl;
    cout << "1. Register and order" << endl;
    cout << "2. Add pizzas to order" << endl;
    cout << "3. View total price for order" << endl;
    cout << "4. Register pick-up or delivery" << endl;
    cout << "5. Flag order as paid for" << endl;
    cout << "6. flag pizza for specific location" << endl;
    cout << "7. Register comments" << endl;

    Pizza pizza;
    char input;
    cin >> input;
    validate_salesman(input, pizza);  /// Salesman Menu

}

void Userinterface::validate_salesman(char input, Pizza pizza)
{
    if (input == '1') {
        cout << "Register an order" << endl; // Skrá inn pöntun (pizza, meðlæti)
        get_pizza_menu(pizza);

    }
    else if (input == '2'){
        cout << "Add pizza" << endl; // Bæta pizzu við pöntun
    }
    else if (input == '3'){
        cout << "View total price for order" << endl; // Ná í verð
    }
    else if (input == '4'){
        cout << "Register pick up or delivery" << endl; // Skrá inn sækt eða sótt
    }
    else if (input == '5'){
        cout << "Flag order as paid for" << endl; // Merkja sem greitt
    }
    else if (input == '6'){
        cout << "Flag pizza for specific location" << endl; //
    }
    else if (input == '7') {
        cout << "Register comments" << endl; // Bæta við athugasemd
    }
    else {
        cout << "Invalid input! Please try again!" << endl;
    }
}


void Userinterface::get_pizza_menu(Pizza pizza){

    ifstream fin;
    string str;

    fin.open("pizza.txt");

    if (fin.is_open()) {
        while (!fin.eof()){
        getline(fin, str);

        cout << str << endl;
        }
fin.close();
    }
    else {
          cout << "Unable to read from file!" << endl;
         }



}

