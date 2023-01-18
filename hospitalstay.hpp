#ifndef HOSPITALSTAY_HPP
#define HOSPITALSTAY_HPP

#include <iostream>
using namespace std;


void display_hospitalstay_menu()
{
    cout<<"Select your choice."<<endl;
    cout<<" 1. ICU\t\t\tRM 265\n 2. HDU\t\t\tRM 185\n 3. Single Deluxe\tRM 600\n 4. Single Standard\tRM 300\n 5. Double Bedded\tRM 160\n 6. 4-Bedded\t\tRM 120\n";
}

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

            display_hospitalstay_menu();
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
                cout << (counter+1) << ". ICU RM" << frequency*265 << endl;
                hospitalstay_charge = hospitalstay_charge + frequency*265;
                cout << endl;
                break;
            case 2:
                cout << (counter+1) << ". HDU RM" << frequency*185 << endl;
                hospitalstay_charge = hospitalstay_charge + frequency*185;
                cout << endl;
                break;
            case 3:
                cout << (counter+1) << ". Single Deluxe RM" << frequency*600 << endl;
                hospitalstay_charge = hospitalstay_charge + frequency*600;
                cout << endl;
                break;
            case 4:
                cout << (counter+1) << ". Single Standard RM" << frequency*300 << endl;
                hospitalstay_charge = hospitalstay_charge + frequency*300;
                cout << endl;
                break;
            case 5:
                cout << (counter+1) << ". Double Bedded RM" << frequency*160 << endl;
                hospitalstay_charge = hospitalstay_charge + frequency*160;
                cout << endl;
                break;
            case 6:
                cout << (counter+1) << ". 4-Bedded RM" << frequency*120 << endl;
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