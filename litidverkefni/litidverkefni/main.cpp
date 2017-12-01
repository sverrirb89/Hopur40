
#include "header.hpp"
using namespace std;


int main() {
    string name;
    int age;
    char power;
    Superhero batman("jonni", 28, 'h');
    Superhero hetja;
    
    string str;
   
  
    ofstream fout;
   
    
    cout << "Please enter the name: ";
    
    cin >> name;
        cout << "Please enter the age: ";
    cin >> age;
      cout << "Please enter the power: ";
    cin >> power;
    hetja.setName(name);
    hetja.setAge(age);
    hetja.setSuperPower(power);

   
  
    
    
   fout.open("blabla.txt", ios::app);
   if (fout.is_open()) {
        
      fout << hetja;
    
      fout.close();
    }
    
    cout << hetja << endl;
    
    return 0;

    
    
}
    
    
    
    
    
    
  

