#include <iostream>
#include <fstream>
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
        
        do {
            cout << "Continue? (y/n)" << endl;
            cin >> answer;
        } while (answer != 'y' && answer != 'n');
    } while (answer != 'n');
    
    fin.close();
    
    return 0;
}

