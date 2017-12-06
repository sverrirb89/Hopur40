#ifndef PAYSLIP_H
#define PAYSLIP_H

#include<string>
using namespace std;

class PaySlip
{
    public:
        PaySlip();
        PaySlip(string name, int SNN, int salary);
        string get_name();
        string get_SSN();
        int get_salary();

    private:
        string name;
        string SSN;
        int salary;
        int month;
        int year;
};

#endif // PAYSLIP_H
