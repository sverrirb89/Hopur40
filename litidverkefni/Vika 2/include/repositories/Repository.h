#ifndef REPOSITORY_H
#define REPOSITORY_H

#include "PaySlip.h"
#include <fstream>
class Repository
{
    public:
        Repository();
        void add_payslip(const PaySlip& payslip);

    private:
};

#endif // REPOSITORY_H
