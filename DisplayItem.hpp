/* Programmer's info for making this hpp file */
//Name: Raymond Chow Yin Hong
//USM Email: raymondchow@student.usm.my
//GitHub Username: RaymondChowYinHong
//Matric No.: 165011

#ifndef DISPLAYITEM_HPP
#define DISPLAYITEM_HPP

#include <iostream>
using namespace std;

/* Function Purpose  : To list out all the items purchased by patient    */
void Display_patient_item(int menu_choice, int submenu_choice, double amount, size_t j )
{
    if(menu_choice == 1)
    {
        if(submenu_choice == 1)
        {
            cout << (j+1) << ". Norvac(amlodipine)10 mg tablet RM8*" << amount << "= RM" << 8*amount << endl;
        }
        else if(submenu_choice == 2)
        {
            cout << (j+1) << ". Lipitor (atorvastatin)20 mg tablet RM7*" << amount << "= RM" << 7*amount << endl;
        }
        else if(submenu_choice ==3)
        {
            cout << (j+1) << ". Glucovance(metformin+glyburide) 5 mg tablet RM2*" << amount << "= RM" << 2*amount << endl;
        }
        else if(submenu_choice == 4)
        {
            cout << (j+1) << ". Diamicron(gliclazide)80 mg tablet RM1*" << amount << "= RM" << 1*amount << endl;
        }
        else if(submenu_choice == 5)
        {
            cout << (j+1) << ". Noten(atenolol)50 mg tablet RM0.50*" << amount << "= RM" << 0.5*amount << endl;
        }
        else if(submenu_choice == 6)
        {
            cout << (j+1) << ". Ventolin 2.5 mg dose RM4*" << amount << "= RM" << 4*amount << endl;
        }
        else
        {
            cout << "Something is wrong, please contact the IT department." << endl;
        }

    }
    else if(menu_choice == 2)
    {
        if(submenu_choice == 1)
        {
            cout << (j+1) << ". Angiogram RM200*" << amount << "= RM" << 200*amount << endl;
        }
        else if(submenu_choice == 2)
        {
            cout << (j+1) << ". Coronary Bypass RM4000*" << amount << "= RM" << 4000*amount << endl;
        }
        else if(submenu_choice == 3)
        {
            cout << (j+1) << ". Knee Replacement Surgery RM10000*" << amount << "= RM" << 10000*amount << endl;
        }
        else if(submenu_choice == 4)
        {
            cout << (j+1) << ". Spine Surgery RM8000*" << amount << "= RM" << 8000*amount << endl;
        }
        else if(submenu_choice == 5)
        {
            cout << (j+1) << ". Kidney Stone RM3000*" << amount << "= RM" << 3000*amount << endl;

        }
        else if(submenu_choice == 6)
        {
            cout << (j+1) << ". Chemotherapy RM200*" << amount << "= RM" << 200*amount << endl;
        }
        else
        {
            cout << "Something is wrong, please contact the IT department." << endl;
        }
    }
    else if(menu_choice == 3)
    {
        if(submenu_choice == 1)
        {
            cout << (j+1) << ". Consultation RM1*" << amount << "= RM" << 1*amount << endl;
        }
        else if(submenu_choice == 2)
        {
            cout << (j+1) << ". X-Ray RM35*" << amount << "= RM" << 35*amount << endl;
        }
        else if(submenu_choice == 3)
        {
            cout << (j+1) << ". Ultrasound RM10*" << amount << "= RM" << 10*amount << endl;
        }
        else if(submenu_choice == 4)
        {
            cout << (j+1) << ". Angiography RM75*" << amount << "= RM" << 75*amount << endl;
        }
        else if(submenu_choice == 5)
        {
            cout << (j+1) << ". Blood Test RM1*" << amount << "= RM" << 1*amount << endl;
        }
        else if(submenu_choice == 6)
        {
            cout << (j+1) << ". CT Scan RM450*" << amount << "= RM" << 450*amount << endl;
        }
        else
        {
            cout << "Something is wrong, please contact the IT department." << endl;
        }
    }
    else if(menu_choice == 4)
    {
        if(submenu_choice == 1)
        {
            cout << (j+1) << ". ICU RM265*" << amount << "= RM" << 265*amount << endl;
        }
        else if(submenu_choice == 2)
        {
            cout << (j+1) << ". HDU RM185*" << amount << "= RM" << 185*amount << endl;
        }
        else if(submenu_choice == 3)
        {
            cout << (j+1) << ". Single Deluxe RM600*" << amount << "= RM" << 600*amount << endl;
        }
        else if(submenu_choice == 4)
        {
            cout << (j+1) << ". Single Standard RM300*" << amount << "= RM" << 300*amount << endl;
        }
        else if(submenu_choice == 5)
        {
            cout << (j+1) << ". Double Bedded RM160*" << amount << "= RM" << 160*amount << endl;
        }
        else if(submenu_choice == 6)
        {
            cout << (j+1) << ". 4-Bedded RM120*" << amount << "= RM" << 120*amount << endl;
        }
        else
        {
            cout << "Something is wrong, please contact the IT department." << endl;
        }
    }
    else if(menu_choice == 5)
    {
        if(submenu_choice == 1)
        {
            cout << (j+1) << ". Chicken Rice RM8*" << amount << "= RM" << 8*amount << endl;
        }
        else if(submenu_choice == 2)
        {
            cout << (j+1) << ". Ginger Fish With Brown Rice RM12*" << amount << "= RM" << 12*amount << endl;
        }
        else if(submenu_choice == 3)
        {
            cout << (j+1) << ". Chicken Croissant RM6*" << amount << "= RM" << 6*amount << endl;
        }
        else if(submenu_choice == 4)
        {
            cout << (j+1) << ". Nasi Lemak RM4*" << amount << "= RM" << 4*amount << endl;
        }
        else if(submenu_choice == 5)
        {
            cout << (j+1) << ". Fish Fillet With Brown Rice RM9*" << amount << "= RM" << 9*amount << endl;
        }
        else if(submenu_choice == 6)
        {
            cout << (j+1) << ". Apple Juice RM3*" << amount << "= RM" << 3*amount << endl;
        }
        else
        {
            cout << "Something is wrong, please contact the IT department." << endl;
        }
    }

}

#endif