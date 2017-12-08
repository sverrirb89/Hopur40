#include "PaySlip.h"

PaySlip::PaySlip(){}

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
    out << payslip.name << ",";
    out << payslip.ssn << ",";
    out << payslip.salary << ",";
    out << payslip.month << ",";
    out << payslip.year << endl;

    return out;
}

string PaySlip::get_name(){
    return name;
}
string PaySlip::get_ssn(){
    return ssn;
}
int PaySlip::get_salary(){
    return salary;
}
int PaySlip::get_month(){
    return month;
}
int PaySlip::get_year(){
    return year;
}
void PaySlip::set_name(string newname){
    name = newname;
}
void PaySlip::set_ssn(string newssn){
    ssn = newssn;
}
void PaySlip::set_salary(int newsalary){
    salary = newsalary;
}
void PaySlip::set_month(int newmonth){
    month = newmonth;
}
void PaySlip::set_year(int newyear){
    year = newyear;
}

