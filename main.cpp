#include <iostream>
#include "main.hpp"
#include "mainmenu.hpp"
#include "medcine.hpp"
#include "surgery.hpp"
#include "service.hpp"
#include "hospitalstay.hpp"
#include "fooddrink.hpp"
#include "DisplayItem.hpp"
#include "CalcTotalCharges.hpp"
using namespace std;

class Person
{
    public:
        void set_medcine_charge(double charge)
        {
            medcine_charge = charge;
        }
        double get_medcine_charge()
        {
            return medcine_charge;
        }

        void set_surgery_charge(double charge)
        {
            surgery_charge = charge;
        }
        double get_surgery_charge()
        {
            return surgery_charge;
        }

        void set_service_charge(double charge)
        {
            service_charge = charge;
        }
        double get_service_charge()
        {
            return service_charge;
        }

        void set_hospitalstay_charge(double charge)
        {
            hospitalstay_charge = charge;
        }
        double get_hospitalstay_charge()
        {
            return hospitalstay_charge;
        }

        void set_fooddrink_charge(double charge)
        {
            fooddrink_charge = charge;
        }
        double get_fooddrink_charge()
        {
            return fooddrink_charge;
        }

        void set_Total_Charge(double charge)
        {
            Total_Charge = charge;
        }
        double get_Total_Charge()
        {
            return Total_Charge;
        }
    
    private:
        double medcine_charge=0;
        double surgery_charge=0;
        double service_charge=0;
        double hospitalstay_charge=0;
        double fooddrink_charge=0;
        double Total_Charge=0;
};

int main()
{
    char new_patient = 'Y';
    int choice_new_patient;

    while(new_patient!='N')
    {
        char exit_status = 'N';

        Person Patient;

        // double medcine_charge=0, surgery_charge=0, service_charge=0, hospitalstay_charge=0, fooddrink_charge=0, Total_Charge=0;

        int counter = 0;
        // int number_item;

        // do
        // {
        //     if(cin.fail())
        //     {
        //         cin.clear();
        //         cin.ignore();
        //     }
            
        //     cout << "How many item?"<<endl;
        //     cin >> number_item;
        // } while (cin.fail());

        // int menu_choice_array[number_item];
        int* menu_choice_array = new int[1];
        int* submenu_choice_array = new int[1];
        double* amount_array = new double[1];
   


        do{
            int menu_choice;
            int submenu_choice;
            double amount;

            do
            {
                if(cin.fail())
                {
                    cin.clear();
                    cin.ignore();
                }

                display_menu();
                cin>> menu_choice;
                cout << endl;

            } while (cin.fail());

            int charge=0;

            // if( menu_choice==1 || menu_choice == 2 || menu_choice == 3|| menu_choice==4|| menu_choice ==5)
            // {
            //     int size = counter+1;
            //     int* menu_choice_array = new int[size];
            // }

            switch(menu_choice)
            {
                case 1:
                    //medcine
                    menu_choice_array[counter] = menu_choice;
                    charge = Calc_medcine_charge(Patient.get_medcine_charge(), counter, submenu_choice, amount);
                    Patient.set_medcine_charge(charge);
                    submenu_choice_array[counter]= submenu_choice;
                    amount_array[counter] = amount;
                    //cout<<submenu_choice_array[counter]<<endl;
                    //cout<<amount_array[counter]<<endl;
                    counter++;
                    break;
                case 2:
                    //surgery
                    menu_choice_array[counter] = menu_choice;
                    charge = Calc_surgery_charge(Patient.get_surgery_charge(), counter, submenu_choice, amount);
                    Patient.set_surgery_charge(charge);
                    submenu_choice_array[counter]= submenu_choice;
                    amount_array[counter] = amount;
                    //cout<<submenu_choice_array[counter]<<endl;
                    //cout<<amount_array[counter]<<endl;
                    counter++;
                    break;
                case 3:
                    //service
                    menu_choice_array[counter] = menu_choice;
                    charge = Calc_service_charge(Patient.get_service_charge(), counter, submenu_choice, amount);
                    Patient.set_service_charge(charge);
                    submenu_choice_array[counter]= submenu_choice;
                    amount_array[counter] = amount;
                    //cout<<submenu_choice_array[counter]<<endl;
                    //cout<<amount_array[counter]<<endl;
                    counter++;
                    break;
                case 4:
                    //hospital stay
                    menu_choice_array[counter] = menu_choice;
                    charge = Calc_hospitalstay_charge(Patient.get_hospitalstay_charge(), counter, submenu_choice, amount);
                    Patient.set_hospitalstay_charge(charge);
                    submenu_choice_array[counter]= submenu_choice;
                    amount_array[counter] = amount;
                    //cout<<submenu_choice_array[counter]<<endl;
                    //cout<<amount_array[counter]<<endl;
                    counter++;
                    break;
                case 5:
                    //food and drink
                    menu_choice_array[counter] = menu_choice;
                    charge = Calc_fooddrink_charge(Patient.get_fooddrink_charge(), counter, submenu_choice, amount);
                    Patient.set_fooddrink_charge(charge);
                    submenu_choice_array[counter]= submenu_choice;
                    amount_array[counter] = amount;
                    //cout<<submenu_choice_array[counter]<<endl;
                    //cout<<amount_array[counter]<<endl;
                    counter++;
                    break;
                case 6:
                    //Total charges
                    // if(number_item != (counter))
                    // {
                    //     cout << "Amount of item selected is not equal to number of item stated." << endl;
                    //     cout << "Current calculation of charges will be canceled." << endl;
                    //     cout << endl;
                    //     exit_status = 'Y';
                    //     break;
                    // }

                    for(size_t j = 0; j < counter; j++)
                    {
                        menu_choice = menu_choice_array[j];
                        submenu_choice = submenu_choice_array[j];
                        amount = amount_array[j];
                        Display_patient_item(menu_choice, submenu_choice, amount, j);
                    }

                    charge = Calc_Total_Charge(Patient.get_medcine_charge(), Patient.get_surgery_charge(), Patient.get_service_charge(), Patient.get_hospitalstay_charge(), Patient.get_fooddrink_charge());
                    Patient.set_Total_Charge(charge);
                    cout << "Total charges= RM"<< Patient.get_Total_Charge() << endl;
                    cout << endl;
                    exit_status = 'Y';
                    break;
                default:
                    cout<<"Select item on the menu only."<<endl;
                    break;

            
            if( menu_choice==1 || menu_choice == 2 || menu_choice == 3|| menu_choice==4|| menu_choice ==5)
            {
                int size = counter;
                int* tempo_menu_choice_array = new int[size];

                for(size_t i =0; i<counter ;i++)
                {
                    tempo_menu_choice_array[i] = menu_choice_array[i];
                }

                delete [] menu_choice_array;

                menu_choice_array = tempo_menu_choice_array;

                tempo_menu_choice_array = NULL;
                
            }

            if( menu_choice==1 || menu_choice == 2 || menu_choice == 3|| menu_choice==4|| menu_choice ==5)
            {
                int size = counter;
                int* tempo_submenu_choice_array = new int[size];

                for(size_t i =0; i<counter ;i++)
                {
                    tempo_submenu_choice_array[i] = submenu_choice_array[i];
                }

                delete [] submenu_choice_array;

                menu_choice_array = tempo_submenu_choice_array;

                tempo_submenu_choice_array = NULL;
                
            }

            if( menu_choice==1 || menu_choice == 2 || menu_choice == 3|| menu_choice==4|| menu_choice ==5)
            {
                int size = counter;
                double* tempo_amount_array = new double[size];

                for(size_t i =0; i<counter ;i++)
                {
                    tempo_amount_array[i] = amount_array[i];
                }

                delete [] amount_array;

                amount_array = tempo_amount_array;

                tempo_amount_array = NULL;
                
            }

            }

        }while(exit_status!='Y' || cin.fail());

        delete []menu_choice_array;
        delete []submenu_choice_array;
        delete []amount_array;

        do{

        if(cin.fail())
        {
            cin.clear();
            cin.ignore();
        }

        cout << "Any new patient?" << endl;
        cout << "1.Yes\n2.No" << endl;
        cin >> choice_new_patient;
        cout << endl;

        }while(choice_new_patient!=1 && choice_new_patient!=2);

        switch(choice_new_patient)
        {
            case 1:
                break;
            case 2:
                new_patient= 'N';
                break;
            default:
                cout << "Error!" << endl;
                break;
        }


    }
    return 0;
}
