#include "Repository.h"

Repository::Repository()
{
    //ctor
}

void Repository::add_payslip(const PaySlip& payslip){

    ofstream fout;
    fout.open("Payslips.txt", ios::app);
    if (fout.is_open()) {
        fout << payslip;
        fout.close();
    }
    else {
        /// throw error
    }
}
