#include <iostream>
#include <fstream>
using namespace std;


int main() {

    string str;
    ifstream fin;
    char answer;

    fin.open("TextFile.txt");                   // Opna texta skjalið

    do {
        if (fin.is_open()) {                    // Ef skráin er opin
            for(int i = 0; i < 10; i++) {       // Ýtra gegnum línurnar
                getline(fin, str);              // Fá línuna

                cout << str << endl;            // Prenta út línurnar
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

