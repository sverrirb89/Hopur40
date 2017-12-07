#include "AdminUI.h"
#include<iostream>


using namespace std;

AdminUI::AdminUI()
{
    //ctor
}

void AdminUI::main_menu(){
    while (true){
     cout << "Good morning!" << endl;
     cout << "Pick one of the following options: " << endl;
     cout << endl;
     cout << "1. Add a new payslip " << endl;
     cout << "2. Get salary with SSN " << endl;
     cout << "3. Get total salary " << endl;
     cout << "4. Get name " << endl;

     char input;
     cin >> input;
     validate_input(input);
    }
}

void AdminUI::validate_input(char input) {
    if (input == '1'){
        cout << "Adding a new payslip. " << endl;
        payslip_service.add_payslip(New_Payslip());

    }
    else if (input == '2'){
        cout << "Getting salary with SSN." << endl;
        // cin til að setja inn kennitölu
    }
    else if (input == '3'){
        cout << "Getting total year salary." << endl;
    }
    else if (input == '4'){
        cout << "Getting name." << endl;
    }
    else {
        cout << "Invalid input!" << endl;
    }
}

PaySlip AdminUI::New_Payslip()
{
    string name, ssn;
    int salary, month, year;

    cout << "Name: ";
    cin >> name;
    cout << "SSN: ";
    cin >> ssn;
    cout << "Salary: ";
    cin >> salary;
    cout << "Month: ";
    cin >> month;
    cout << "Year: ";
    cin >> year;

    PaySlip payslip(name, ssn, salary, month, year);
    return payslip;
}
