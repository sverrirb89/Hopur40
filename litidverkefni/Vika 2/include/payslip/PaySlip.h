#ifndef PAYSLIP_H
#define PAYSLIP_H

#include<iostream>
#include<string>

using namespace std;

class PaySlip
{
    public:
        PaySlip(string name, string ssn, int salary, int month, int year);
        PaySlip();
        friend ostream& operator << (ostream& out, const PaySlip& payslip);

        string get_name();
        string get_ssn();
        int get_salary();
        int get_month();
        int get_year();
        void set_name(string newname);
        void set_ssn(string newssn);
        void set_salary(int newsalary);
        void set_month(int month);
        void set_year(int newyear);

    private:
        string name;
        string ssn;
        int salary;
        int month;
        int year;
};

#endif // PAYSLIP_H
