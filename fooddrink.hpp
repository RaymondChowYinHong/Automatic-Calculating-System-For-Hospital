/* Programmer's info for making this hpp file */
//Name: Raymond Chow Yin Hong
//USM Email: raymondchow@student.usm.my
//GitHub Username: RaymondChowYinHong
//Matric No.: 165011

#ifndef FOODDRINK_HPP
#define FOODDRINK_HPP

#include <iostream>
using namespace std;

/* Function Purpose  : To list out the food drink menu     */
void display_fooddrink_menu()
{
    cout<<"Select your choice."<<endl;
    cout<<" 1. Chicken Rice\t\tRM 8\n 2. Ginger Fish With Brown Rice\tRM 12\n 3. Chicken Croissant\t\tRM 6\n 4. Nasi Lemak\t\t\tRM 4\n 5. Fish Fillet With Brown Rice\tRM 9\n 6. Apple Juice\t\t\tRM 3\n";
}

/* Function Purpose  : To accept answer for food drink choice and calculate the food drink charge*/
double Calc_fooddrink_charge(double fooddrink_charge, int counter, int &submenu_choice, double &amount)
{
    int fooddrink_choice;
    int amount_fooddrink;

    do
    {
            if(cin.fail())
            {
                cin.clear();
                cin.ignore();
            }

            display_tittle();
            display_fooddrink_menu();
            cout << "Your choice:";
            cin>> fooddrink_choice;
            cout << endl;

            if(fooddrink_choice!=1 && fooddrink_choice!=2 && fooddrink_choice!=3 && fooddrink_choice!=4 && fooddrink_choice!=5 && fooddrink_choice!=6)
            {
                cout << "Enter again."<<endl;
            }
    } while (fooddrink_choice!=1 && fooddrink_choice!=2 && fooddrink_choice!=3 && fooddrink_choice!=4 && fooddrink_choice!=5 && fooddrink_choice!=6);

    submenu_choice = fooddrink_choice;

    do
    {
            if(cin.fail())
            {
                cin.clear();
                cin.ignore();
            }
            
            cout << "Enter amount."<<endl;
            cout << "Amount:";
            cin>>amount_fooddrink;
            cout << endl;

            if(amount_fooddrink <0 || cin.fail())
            {
                cout << "Enter again."<<endl;
            }
    } while (amount_fooddrink <0 || cin.fail());

    double frequency = static_cast<double>(amount_fooddrink);
    amount = frequency;
            
    switch(fooddrink_choice)
    {
            case 1:
                cout << (counter+1) << ". Chicken Rice RM8*" << frequency << "= RM" << frequency*8 << endl;
                fooddrink_charge = fooddrink_charge + frequency*8;
                cout << endl;
                break;
            case 2:
                cout << (counter+1) << ". Ginger Fish With Brown Rice RM12*" << frequency << "= RM" << frequency*12 << endl;
                fooddrink_charge = fooddrink_charge + frequency*12;
                cout << endl;
                break;
            case 3:
                cout << (counter+1) << ". Chicken Croissant RM6*" << frequency << "= RM" << frequency*6 << endl;
                fooddrink_charge = fooddrink_charge + frequency*6;
                cout << endl;
                break;
            case 4:
                cout << (counter+1) << ". Nasi Lemak 4*" << frequency << "= RM" << frequency*4 << endl;
                fooddrink_charge = fooddrink_charge + frequency*4;
                cout << endl;
                break;
            case 5:
                cout << (counter+1) << ". Fish Fillet With Brown Rice 9*" << frequency << "= RM" << frequency*9 << endl;
                fooddrink_charge = fooddrink_charge + frequency*9;
                cout << endl;
                break;
            case 6:
                cout << (counter+1) << ". Apple Juice RM" << frequency*3 << endl;
                cout << (counter+1) << ". Apple Juice RM3*" << frequency << "= RM" << frequency*3 << endl;
                fooddrink_charge = fooddrink_charge + frequency*3;
                cout << endl;
                break;
            default:
                cout << "Enter again."<<endl;
                break;
    }
    return fooddrink_charge;
}

#endif