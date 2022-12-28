#ifndef CALCTOTALCHARGES_HPP
#define CALCTOTALCHARGES_HPP

#include <iostream>
using namespace std;


double Calc_Total_Charge(double medcine_charge, double surgery_charge, double service_charge, double hospitalstay_charge, double fooddrink_charge)
{
    return (medcine_charge + surgery_charge + service_charge + hospitalstay_charge + fooddrink_charge);
}

#endif