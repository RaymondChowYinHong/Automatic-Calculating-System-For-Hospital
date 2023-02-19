/* Programmer's info for making this hpp file */
//Name: Raymond Chow Yin Hong
//USM Email: raymondchow@student.usm.my
//GitHub Username: RaymondChowYinHong
//Matric No.: 165011

#ifndef HOSPITALSTAY_HPP
#define HOSPITALSTAY_HPP

#include <iostream>
using namespace std;

/* Function Purpose  : To list out the hospital stay menu     */
void display_hospitalstay_menu()
{
    cout<<"Select your choice."<<endl;
    cout<<" 1. ICU\t\t\tRM 265\n 2. HDU\t\t\tRM 185\n 3. Single Deluxe\tRM 600\n 4. Single Standard\tRM 300\n 5. Double Bedded\tRM 160\n 6. 4-Bedded\t\tRM 120\n";
}

/* Function Purpose  : To accept answer for hospital stay choice and calculate the hospital stay charge*/
double Calc_hospitalstay_charge(double hospitalstay_charge, int counter, int &submenu_choice, double &amount)
{
    int hospitalstay_choice;
    double amount_hospitalstay;

    do
    {
            if(cin.fail())
            {
                cin.clear();
                cin.ignore();
            }

            display_tittle();
            display_hospitalstay_menu();
            cout << "Your choice:";
            cin>> hospitalstay_choice;
            cout << endl;

            if(hospitalstay_choice!=1 && hospitalstay_choice!=2 && hospitalstay_choice!=3 && hospitalstay_choice!=4 && hospitalstay_choice!=5 && hospitalstay_choice!=6)
            {
                cout << "Enter again."<<endl;
            }
    } while (hospitalstay_choice!=1 && hospitalstay_choice!=2 && hospitalstay_choice!=3 && hospitalstay_choice!=4 && hospitalstay_choice!=5 && hospitalstay_choice!=6);
    
    submenu_choice = hospitalstay_choice;
    do
    {
            if(cin.fail())
            {
                cin.clear();
                cin.ignore();
            }
            
            cout << "Enter frequency(day)."<<endl;
            cout << "Frequency:";
            cin>>amount_hospitalstay;
            cout << endl;

            if(amount_hospitalstay <0 || cin.fail())
            {
                cout << "Enter again."<<endl;
            }

    } while (amount_hospitalstay <0 || cin.fail());

    double frequency = amount_hospitalstay;
    amount = frequency;
            
    switch(hospitalstay_choice)
    {
            case 1:
                cout << (counter+1) << ". ICU RM265*" << frequency << "= RM" << frequency*265 << endl;
                hospitalstay_charge = hospitalstay_charge + frequency*265;
                cout << endl;
                break;
            case 2:
                cout << (counter+1) << ". HDU RM185*" << frequency << "= RM" << frequency*185 << endl;
                hospitalstay_charge = hospitalstay_charge + frequency*185;
                cout << endl;
                break;
            case 3:
                cout << (counter+1) << ". Single Deluxe RM600*" << frequency << "= RM" << frequency*600 << endl;
                hospitalstay_charge = hospitalstay_charge + frequency*600;
                cout << endl;
                break;
            case 4:
                cout << (counter+1) << ". Single Standard RM300*" << frequency << "= RM" << frequency*300 << endl;
                hospitalstay_charge = hospitalstay_charge + frequency*300;
                cout << endl;
                break;
            case 5:
                cout << (counter+1) << ". Double Bedded RM160*" << frequency << "= RM" << frequency*160 << endl;
                hospitalstay_charge = hospitalstay_charge + frequency*160;
                cout << endl;
                break;
            case 6:
                cout << (counter+1) << ". 4-Bedded RM120*" << frequency << "= RM" << frequency*120 << endl;
                hospitalstay_charge = hospitalstay_charge + frequency*120;
                cout << endl;
                break;
            default:
                cout << "Enter again."<<endl;
                break;
    }
    return hospitalstay_charge;
}

#endif