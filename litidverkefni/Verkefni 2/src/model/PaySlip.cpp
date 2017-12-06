#include "PaySlip.h"

PaySlip::PaySlip()
{

}

PaySlip::PaySlip(string name, string SSN, int salary)
{
    this->name = name;
    this->SSN = SSN;
    this->salary = salary;
}

string PaySlip::get_name()
{
    return this->name;
}

string PaySlip::get_SSN()
{
    return this->SSN;
}

int PaySlip::get_salary()
{
    return this->salary;
}
