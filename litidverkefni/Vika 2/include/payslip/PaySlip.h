#ifndef PAYSLIP_H
#define PAYSLIP_H

#include<iostream>
#include<string>

using namespace std;

class PaySlip
{
    public:
        PaySlip(string name, string ssn, int salary, int month, int year);
        friend ostream& operator << (ostream& out, const PaySlip& payslip);
    private:
        string name;
        string ssn;
        int salary;
        int month;
        int year;
};

#endif // PAYSLIP_H
