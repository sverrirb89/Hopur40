#ifndef PAYSLIPSERVICE_H
#define PAYSLIPSERVICE_H

#include "PaySlip.h"
#include "Repository.h"

class PayslipService
{
    public:
        PayslipService();
        void add_payslip(const PaySlip& payslip);
        vector<PaySlip> readFromFIle(string ssn);
    private:
        Repository payslip_repo;

};

#endif // PAYSLIPSERVICE_H
