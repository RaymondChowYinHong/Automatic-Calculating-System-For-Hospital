#ifndef SERVICE_HPP
#define SERVICE_HPP

#include <iostream>
using namespace std;


void display_service_menu()
{
    cout<<"Select your choice."<<endl;
    cout<<" 1. Consultation\tRM1\n 2. X-Ray\tRM35\n 3. Ultrasound\tRM10\n 4. Angiography\tRM75\n 5. Blood Test\tRM1\n 6. CT Scan\tRM450\n";
}

double Calc_service_charge(double service_charge, int counter, int &submenu_choice, double &amount)
{
    int service_choice;
    int amount_service;

    do
    {
            if(cin.fail())
            {
                cin.clear();
                cin.ignore();
            }
            
            display_service_menu();
            cin>> service_choice;
            cout << endl;

            if(service_choice!=1 && service_choice!=2 && service_choice!=3 && service_choice!=4 && service_choice!=5 && service_choice!=6)
            {
                cout << "Enter again."<<endl;
            }
    } while (service_choice!=1 && service_choice!=2 && service_choice!=3 && service_choice!=4 && service_choice!=5 && service_choice!=6);

    submenu_choice = service_choice;

    do
    {
            if(cin.fail())
            {
                cin.clear();
                cin.ignore();
            }
            
            cout << "Enter frequency."<<endl;
            cin>>amount_service;
            cout << endl;

            if(amount_service <0 || cin.fail())
            {
                cout << "Enter again."<<endl;
            }
    } while (amount_service <0 || cin.fail());

    double frequency = static_cast<double>(amount_service);
    amount = frequency;
            
    switch(service_choice)
    {
            case 1:
                cout << (counter+1) << ". Consultation RM" << frequency*1 << endl;
                service_charge = service_charge + frequency*1;
                cout << endl;
                break;
            case 2:
                cout << (counter+1) << ". X_Ray RM" << frequency*35 << endl;
                service_charge = service_charge + frequency*35;
                cout << endl;
                break;
            case 3:
                cout << (counter+1) << ". Ultrasound RM" << frequency*10 << endl;
                service_charge = service_charge + frequency*10;
                cout << endl;
                break;
            case 4:
                cout << (counter+1) << ". Angiography RM" << frequency*75 << endl;
                service_charge = service_charge + frequency*75;
                cout << endl;
                break;
            case 5:
                cout << (counter+1) << ". Blood Test RM" << frequency*1 << endl;
                service_charge = service_charge + frequency*1;
                cout << endl;
                break;
            case 6:
                cout << (counter+1) << ". CT Scan RM" << frequency*450 << endl;
                service_charge = service_charge + frequency*450;
                cout << endl;
                break;
            default:
                cout << "Enter again."<<endl;
                cout << endl;
                break;
    }
    return service_charge;
}

#endif