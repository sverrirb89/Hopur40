#include <iostream>
#include <fstream>
using namespace std;


int main() {

    string str;
    ifstream fin;
    char answer;

    fin.open("TextFile.txt");                   // Opna texta skjali�

    do {
        if (fin.is_open()) {                    // Ef skr�in er opin
            for(int i = 0; i < 10; i++) {       // �tra gegnum l�nurnar
                getline(fin, str);              // F� l�nuna

                cout << str << endl;            // Prenta �t l�nurnar
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

