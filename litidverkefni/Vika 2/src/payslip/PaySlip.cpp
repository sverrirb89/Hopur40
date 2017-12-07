#include "PaySlip.h"

PaySlip::PaySlip(string name, string ssn, int salary, int month, int year)
{
    this->name = name;
    this->ssn = ssn;
    this->salary = salary;
    this->month = month;
    this->year = year;
}


ostream& operator << (ostream& out, const PaySlip& payslip)
{
    out << payslip.name << ", ";
    out << payslip.ssn << ", ";
    out << payslip.salary << ", ";
    out << payslip.month << ", ";
    out << payslip.year << endl;

    return out;
}
