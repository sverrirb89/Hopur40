
#include <fstream>
#include <vector>
#include "data.h"
#include <string>
Data::Data(){}
//const int MAX_SIZE = 100000;




 void Data::add_topping(Topping& topping){
 vector<string> tempmeat = topping.getMeatTopping();
 vector<string> tempspice = topping.getspiceToppings();
 vector<string> tempveggies = topping.getveggiesToppings();
 vector<string> tempcheese = topping.getCheeseToppings();
     cout << "KjötAlegg: ";
     for (unsigned int i = 0; i < tempmeat.size(); i++){
         cout << tempmeat[i] << " - ";
     }
  ofstream fout;
  fout.open("topping.txt",ios::app);
     if (fout.is_open()) {
         fout << "Nafn kjotaleggs: \n ";
         for (unsigned int i = 0; i < tempmeat.size(); i++){
             fout << tempmeat[i] << " - ";
         }
         fout << " \n \n -";

         fout.close();



     }

 }


 void Data::add_pizza(Pizza& pizza){
  // char str[MAX_SIZE];
     vector<string> temp = pizza.gettoppings();
     cout << "Name: " << pizza.getName() << endl;
     cout << "Size: " << pizza.getsize() << endl;
     cout << "Verd" << pizza.getverd() << endl;
     cout << "Alegg: ";
     for (unsigned int i = 0; i < temp.size(); i++){
         cout << temp[i] << " - ";
     }

     ofstream fout;

     cout << "Hello, can you something below me???" << endl;
     fout.open("pizza.txt",ios::app);
     if (fout.is_open()) {
      //   cin.getline(str, MAX_SIZE);
     //     string tempi = str;
         fout << "Nafn pizzu: " << pizza.getName() << " \n" << "Stærð pizzu: " << pizza.getsize() << "tommur " <<"\n" << "Pizza kostar: " <<pizza.getverd() << "kr \n Álegg: ";
         for (unsigned int i = 0; i < temp.size(); i++){
             fout << temp[i] << ", ";
         }
         fout << " \n \n -";

         fout.close();
     }
     else{
        ///throw error
     }

 }

/*void Data::add_topping(Topping& topping){
      vector<string> tempa = topping.getMeatTopping();
    vector<string> tempb = topping.getspiceToppings();
    vector<string> tempc = topping.getveggiesToppings();
    vector<string> tempd = topping.getCheeseToppings();
    cout << "testfor this add topping" << endl;

}
*/
void Data::read_from_file(){
    ifstream fin;
    //breyta nafninu á skránni
    fin.open("pizza.txt");
    // all_pay_slips.clear(); // allar pizzur (vector<pizza> all_pizzas (þarf að búa til))
    if (fin.is_open()){
        while(!fin.eof()){
            //Annar klasi kæmi hingað inn (t.d. OrderModalClass klasinn sem geymir upplýsingar um allar pantanirnar)
            Pizza P; // PaySlips P;
            string file;
            //fin >> file les inn næstu línu í skjalinu ykkar í stringinn file í gegnum while lúppuna x
            fin >> file;

            stringstream ss(file);
            string item;
            int counter = 0;
            //cout << "Here is the file: " << file << endl;
            while(getline(ss, item, ',')){
                //cout << item << endl;
                //cout << counter << endl;
                if (counter == 0){
                    //Senda nafnið inn í klasann
                    P.set_name(item); /// Nafn
                }
                else if (counter == 1){ /// Verð
                    P.set_ssn(item);
                }
                else if (counter == 2){ /// Stærð
                    string s = item;
                    stringstream testing(s);
                    int x = 0;
                    testing >> x;
                    P.set_salary(x);
                }
                else if (counter == 3){ /// botn
                    string s = item;
                    stringstream testing(s);
                    int x = 0;
                    testing >> x;
                    P.set_month(x);
                }
                else if (counter == 4){ /// toppings
                    //Í OrderModalClass klasanum kallið þið aftur á getline með delimeterinum '-' t.d.
                    string s = item;
                    stringstream testing(s);
                    int x = 0;
                    testing >> x;
                    P.set_year(x);
                }
                counter++;
            }
            //cout << "My class is: " << P.get_name() << " " << P.get_ssn() << " " << P.get_salary() << " " << P.get_month() << " " << P.get_year() << endl;
            all_pizzas.push_back(P); //all_pay_slips.push_back(P);
        }
    }
    else{
        cout << "File not opened" << endl;
    }
    fin.close();
    cout << "Can you see me " << endl;
}
