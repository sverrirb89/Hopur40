#include "Repository.h"
#include <sstream>

Repository::Repository()
{
    //ctor
}

void Repository::add_payslip(const PaySlip& payslip){

    ofstream fout;
    fout.open("Payslips.txt", ios::app);
    if (fout.is_open()) {
        cout << "Hello " << endl;
        fout << payslip << endl;
    }
    else {
        /// throw error
    }
    fout.close();
}

void Repository::read_from_file(){
    ifstream fin;
    //breyta nafninu á skránni
    fin.open("Payslips.txt");
    all_pay_slips.clear();
    if (fin.is_open()){
        while(!fin.eof()){
            //Annar klasi kæmi hingað inn (t.d. OrderModalClass klasinn sem geymir upplýsingar um allar pantanirnar)
            PaySlip P;
            string file;s
            //fin >> file les inn næstu línu í skjalinu ykkar í stringinn file í gegnum while lúppuna
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
                    P.set_name(item);
                }
                else if (counter == 1){
                    P.set_ssn(item);
                }
                else if (counter == 2){
                    string s = item;
                    stringstream testing(s);
                    int x = 0;
                    testing >> x;
                    P.set_salary(x);
                }
                else if (counter == 3){
                    string s = item;
                    stringstream testing(s);
                    int x = 0;
                    testing >> x;
                    P.set_month(x);
                }
                else if (counter == 4){
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
            all_pay_slips.push_back(P);
        }
    }
    else{
        cout << "File not opened" << endl;
    }
    fin.close();
    cout << "Can you see me " << endl;
}

//Réttast er að hafa þetta fall í services klasanum :D
//Services klasinn kallar í read_from_file fallið sem myndi þá ekki vera void
//heldur return vector<PaySlip>
//Þá myndi þetta fall vera í services klasanum
vector<PaySlip> Repository::withSameSsn(string ssn){
    //Populate the vector
    read_from_file();
    //Clear the vector so it´s empty when we start to fill it
    paySlipsWithSameSsn.clear();

    //for loop to find the data we need from the vector with all the data from the file
    for (int i = 0; i < all_pay_slips.size(); i++){
        if (all_pay_slips[i].get_ssn() == ssn){
            paySlipsWithSameSsn.push_back(all_pay_slips[i]);
        }
    }
    //Return the data we were searching for up to services and then the ui
    return paySlipsWithSameSsn;
}

