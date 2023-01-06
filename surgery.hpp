#ifndef SURGERY_HPP
#define SURGERY_HPP

#include <iostream>
using namespace std;


void display_surgery_menu()
{
    cout<<"Select your choice."<<endl;
    cout<<" 1. Angiogram\t\t\tRM 200\n 2. Coronary Bypass\t\tRM 4000\n 3. Knee Replacement Surgery\tRM 10000\n 4. Spine Surgery\t\tRM 8000\n 5. Kidney Stone\t\tRM 3000\n 6. Chemotherapy\t\tRM 200\n";
}

double Calc_surgery_charge(double surgery_charge, int counter, int &submenu_choice, double &amount)
{
    int surgery_choice;
    int amount_surgery;

    do
    {
            if(cin.fail())
            {
                cin.clear();
                cin.ignore();
            }
            
            display_surgery_menu();
            cin>> surgery_choice;
            cout << endl;

            if(surgery_choice!=1 && surgery_choice!=2 && surgery_choice!=3 && surgery_choice!=4 && surgery_choice!=5 && surgery_choice!=6)
            {
                cout << "Enter again."<<endl;
            }
    } while (surgery_choice!=1 && surgery_choice!=2 && surgery_choice!=3 && surgery_choice!=4 && surgery_choice!=5 && surgery_choice!=6);

    submenu_choice = surgery_choice;

    do
    {
            if(cin.fail())
            {
                cin.clear();
                cin.ignore();
            }
            
            cout << "Enter frequency."<<endl;
            cin>>amount_surgery;
            cout << endl;

            if(amount_surgery <0 || cin.fail())
            {
                cout << "Enter again."<<endl;
            }
    } while (amount_surgery <0 || cin.fail());

    double frequency = static_cast<double>(amount_surgery);
    amount = frequency;
            
    switch(surgery_choice)
    {
            case 1:
                cout << (counter+1) << ". Angiogram RM" << frequency*200 << endl;
                surgery_charge = surgery_charge + frequency*200;
                cout << endl;
                break;
            case 2:
                cout << (counter+1) << ". Coronary Bypass RM" << frequency*4000 << endl;
                surgery_charge = surgery_charge + frequency*4000;
                cout << endl;
                break;
            case 3:
                cout << (counter+1) << ". Knee Replacement Surgery RM" << frequency*10000 << endl;
                surgery_charge = surgery_charge + frequency*10000;
                cout << endl;
                break;
            case 4:
                cout << (counter+1) << ". Spine Surgery RM" << frequency*8000 << endl;
                surgery_charge = surgery_charge + frequency*8000;
                cout << endl;
                break;
            case 5:
                cout << (counter+1) << ". Kidney Stone RM" << frequency*3000 << endl;
                surgery_charge = surgery_charge + frequency*3000;
                cout << endl;
                break;
            case 6:
                cout << (counter+1) << ". Chemotherapy RM" << frequency*200 << endl;
                surgery_charge = surgery_charge + frequency*200;
                cout << endl;
                break;
            default:
                cout << "Enter again."<<endl;
                cout << endl;
                break;
    }
    
    return surgery_charge;
}

#endif