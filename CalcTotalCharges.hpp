/* Programmer's info for making this hpp file */
//Name: Raymond Chow Yin Hong
//USM Email: raymondchow@student.usm.my
//GitHub Username: RaymondChowYinHong
//Matric No.: 165011

#ifndef CALCTOTALCHARGES_HPP
#define CALCTOTALCHARGES_HPP

#include <iostream>
using namespace std;

/* Function Purpose: To calculate total chages 
by adding up medicine charge, surgery charge, service charge, hospital stay charge and food drink charge*/
double Calc_Total_Charge(double medicine_charge, double surgery_charge, double service_charge, double hospitalstay_charge, double fooddrink_charge)
{
    return (medicine_charge + surgery_charge + service_charge + hospitalstay_charge + fooddrink_charge);
}

#endif