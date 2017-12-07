#include "PayslipService.h"


PayslipService::PayslipService()
{
    //ctor
}

void PayslipService::add_payslip(const PaySlip& payslip)
{
    payslip_repo.add_payslip(payslip);
    cout << payslip << endl;
    cout << endl;
}
