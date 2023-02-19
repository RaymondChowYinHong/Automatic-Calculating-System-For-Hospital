/* Programmer's info for making this hpp file */
//Name: Raymond Chow Yin Hong
//USM Email: raymondchow@student.usm.my
//GitHub Username: RaymondChowYinHong
//Matric No.: 165011

#ifndef SERVICE_HPP
#define SERVICE_HPP

#include <iostream>
using namespace std;

/* Function Purpose  : To list out the service menu     */
void display_service_menu()
{
    cout<<"Select your choice."<<endl;
    cout<<" 1. Consultation\tRM 1\n 2. X-Ray\t\tRM 35\n 3. Ultrasound\t\tRM 10\n 4. Angiography\t\tRM 75\n 5. Blood Test\t\tRM 1\n 6. CT Scan\t\tRM 450\n";
}

/* Function Purpose  : To accept answer for choice of service and calculate the service charge*/
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
            
            display_tittle();
            display_service_menu();
            cout << "Your choice:";
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
            cout << "Frequency:";
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
                cout << (counter+1) << ". Consultation RM1*" << frequency << "= RM" << frequency*1 << endl;
                service_charge = service_charge + frequency*1;
                cout << endl;
                break;
            case 2:
                cout << (counter+1) << ". X_Ray RM35*" << frequency << "= RM" << frequency*35 << endl;
                service_charge = service_charge + frequency*35;
                cout << endl;
                break;
            case 3:
                cout << (counter+1) << ". Ultrasound RM10*" << frequency << "= RM" << frequency*10 << endl;
                service_charge = service_charge + frequency*10;
                cout << endl;
                break;
            case 4:
                cout << (counter+1) << ". Angiography RM75*" << frequency << "= RM" << frequency*75 << endl;
                service_charge = service_charge + frequency*75;
                cout << endl;
                break;
            case 5:
                cout << (counter+1) << ". Blood Test RM1*" << frequency << "= RM" << frequency*1 << endl;
                service_charge = service_charge + frequency*1;
                cout << endl;
                break;
            case 6:
                cout << (counter+1) << ". CT Scan RM450*" << frequency << "= RM" << frequency*450 << endl;
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