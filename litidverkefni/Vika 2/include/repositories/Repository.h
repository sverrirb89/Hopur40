#ifndef REPOSITORY_H
#define REPOSITORY_H

#include "PaySlip.h"
#include <fstream>
#include <vector>
class Repository
{
    public:
        Repository();
        void add_payslip(const PaySlip& payslip);
        void read_from_file();
        vector<PaySlip> withSameSsn(string ssn);

    private:
        vector<PaySlip> paySlipsWithSameSsn;
        vector<PaySlip> all_pay_slips;
};

#endif // REPOSITORY_H
