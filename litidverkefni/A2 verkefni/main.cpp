#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int MAX_SIZE = 100000;

int main()
{
    char str[MAX_SIZE];
    ofstream fout;
    fout.open("textOutput.txt", ios::app);

    do {
    if (fout.is_open()) {
            cin.getline(str, MAX_SIZE);
            string temp = str;
            if (temp[0] == '\\'){
                break;
            }
            else{
                fout << temp << "\n";
            }

        }

    }while (!cin.fail());


    fout.close();

    return 0;
}
