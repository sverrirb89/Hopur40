#include <iostream>
#include <fstream>
<<<<<<< HEAD
#include <string>
using namespace std;

int main() {
    
    string c;
    ifstream fin;
    char answer;

    fin.open("TextFile.txt");
    if (fin.is_open() ) {
        while (!fin.eof() ) {
            getline(fin, c);
            cout << c << endl;
        }
        fin.close();
    }
    
    else {
        cout << "Unable to read from file!" << endl;
=======
#include "header.hpp"
using namespace std;


int main() {
    
    string str;
    ifstream fin;
    char answer;
    
    fin.open("TextFile.txt");
    
    do {
        if (fin.is_open()) {
            for(int i = 0; i < 10; i++) {
                getline(fin, str);
                
                cout << str << endl;
            }
        }
        
        else {
            cout << "Unable to read from file!" << endl;
        }
>>>>>>> bbbb0ab98f283b31e3dd59ccc33d079a8eec412b
        
        do {
            cout << "Continue? (y/n)" << endl;
            cin >> answer;
        } while (answer != 'y' && answer != 'n');
    } while (answer != 'n');
    
    fin.close();
    
<<<<<<< HEAD
    
=======
    return 0;
>>>>>>> bbbb0ab98f283b31e3dd59ccc33d079a8eec412b
}

