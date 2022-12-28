#ifndef MEDCINE_HPP
#define MEDCINE_HPP

#include <iostream>
using namespace std;

void display_medcine_menu()
{
    cout<<"Select your choice."<<endl;
    cout<<" 1. Norvac(amlodipine)10 mg tablet \tRM8\n 2. Lipitor (atorvastatin)20 mg tablet \tRM7\n 3. Glucovance(metformin+glyburide) 5 mg tablet \tRM2\n 4. Diamicron(gliclazide)80 mg tablet \tRM1\n 5. Noten(atenolol)50 mg tablet \tRM0.50\n 6. Ventolin 2.5 mg dose \tRM4\n";
}

double Calc_medcine_charge(double medcine_charge, int counter, int &submenu_choice, double &amount)
{
    int medcine_choice;
    double amount_medcine;

    do
    {
            if(cin.fail())
            {
                cin.clear();
                cin.ignore();
            }

            display_medcine_menu();
            cin>> medcine_choice;
            cout << endl;

            if(medcine_choice!=1 && medcine_choice!=2 && medcine_choice!=3 && medcine_choice!=4 && medcine_choice!=5 && medcine_choice!=6)
            {
                cout << "Enter again."<<endl;
            }
    } while (medcine_choice!=1 && medcine_choice!=2 && medcine_choice!=3 && medcine_choice!=4 && medcine_choice!=5 && medcine_choice!=6);

    submenu_choice = medcine_choice;

    do
    {
            if(cin.fail())
            {
                cin.clear();
                cin.ignore();
            }
            
            cout << "Enter amount."<<endl;
            cin>> amount_medcine;
            cout << endl;

            if(amount_medcine <0 || cin.fail())
            {
                cout << "Enter again."<<endl;
            }
    } while (amount_medcine <0 || cin.fail());

    amount = amount_medcine;
            

    switch(medcine_choice)
    {
            case 1:
                cout << (counter+1) << ". Norvac(amlodipine)10 mg tablet RM" << amount*8 << endl;
                medcine_charge = medcine_charge + amount*8;
                cout << endl;
                break;
            case 2:
                cout << (counter+1) << ". Lipitor (atorvastatin)20 mg tablet RM" << amount*7 << endl;
                medcine_charge = medcine_charge + amount*7;
                cout << endl;
                break;
            case 3:
                cout << (counter+1) << ". Glucovance(metformin+glyburide) 5 mg tablet RM" << amount*2 << endl;
                medcine_charge = medcine_charge + amount*2;
                cout << endl;
                break;
            case 4:
                cout << (counter+1) << ". Diamicron(gliclazide)80 mg tablet RM" << amount*1 << endl;
                medcine_charge = medcine_charge + amount*1;
                break;
            case 5:
                cout << (counter+1) << ". Noten(atenolol)50 mg tablet RM" << amount*0.50 << endl;
                medcine_charge = medcine_charge + amount*0.5;
                cout << endl;
                break;
            case 6:
                cout << (counter+1) << ". Ventolin 2.5 mg dose RM" << amount*4 << endl;
                medcine_charge = medcine_charge + amount*4;
                cout << endl;
                break;
            default:
                cout << "Enter again."<<endl;
                cout << endl;
                break;
    }

    return medcine_charge;   
}

#endif