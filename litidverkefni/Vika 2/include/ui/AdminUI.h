#ifndef ADMINUI_H
#define ADMINUI_H

#include "AdminUI.h"
#include "PayslipService.h"

class AdminUI
{
    public:
        AdminUI();
        void main_menu();


    private:
        void validate_input(char input);
        PaySlip New_Payslip();
        PayslipService payslip_service;

};

#endif // ADMINUI_H
