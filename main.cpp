/********************************************************************************/
/* Mini Project Info		                          	                        */
/* Project Title    : Automatic Calculating System For Hospital (Medical bills)	*/
/* Project Purpose  : To calculate patient's total charges based on medicine,   */
/*                    surgery, service, hospital stay and food drink.           */
/********************************************************************************/


//This program will calculate patient's total charge based on their speding at medicine, surgery, service, hospital stay and food drink.
#include <iostream>
#include <string>
#include "main.hpp"
#include "LoginRegister.hpp"
#include "mainmenu.hpp"
#include "medicine.hpp"
#include "surgery.hpp"
#include "service.hpp"
#include "hospitalstay.hpp"
#include "fooddrink.hpp"
#include "DisplayItem.hpp"
#include "CalcTotalCharges.hpp"
#include "CheckPatient.hpp"

using namespace std;


/* Programmer's info for making this class */
//Name: Raymond Chow Yin Hong
//USM Email: raymondchow@student.usm.my
//GitHub Username: RaymondChowYinHong
//Matric No.: 165011
class Person
{
    public:
        void set_medicine_charge(double charge)
        {
            medicine_charge = charge;
        }
        double get_medicine_charge()
        {
            return medicine_charge;
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
        double medicine_charge=0;
        double surgery_charge=0;
        double service_charge=0;
        double hospitalstay_charge=0;
        double fooddrink_charge=0;
        double Total_Charge=0;
};

/* Programmer's info for making this main function */
//Name: Raymond Chow Yin Hong
//USM Email: raymondchow@student.usm.my
//GitHub Username: RaymondChowYinHong
//Matric No.: 165011
/* Function Purpose  : To show the flow of program*/
int main()
{
    char new_patient = 'Y';
    int choice_new_patient;

    LOGIN_REGISTER();

    while(new_patient!='N')//Keep looping until there is no more new patient
    {  

        char exit_status = 'N';

        Person Patient;
        
        int counter = 0;

        //Create 3 pinter array to store patient's choices for main menu, submenu and amount
        int* menu_choice_array = new int[1];
        int* submenu_choice_array = new int[1];
        double* amount_array = new double[1];
   


        do{//Keep looping until there is no more item to be calculated
            int menu_choice;
            int submenu_choice;
            double amount;

            do//Keep looping until the user cin corret data type and value
            {
                if(cin.fail())
                {
                    cin.clear();
                    cin.ignore();
                }

                display_tittle();
                display_menu();
                cout << "Your choice:";
                cin>> menu_choice;
                cout << endl;

            } while (cin.fail());

            int charge=0;

            switch(menu_choice)
            {
                case 1:
                    //medicine
                    menu_choice_array[counter] = menu_choice;
                    charge = Calc_medicine_charge(Patient.get_medicine_charge(), counter, submenu_choice, amount);// get medicine charge
                    Patient.set_medicine_charge(charge);
                    submenu_choice_array[counter]= submenu_choice;
                    amount_array[counter] = amount;

                    //Enable code below for testing purpose
                    //cout<<submenu_choice_array[counter]<<endl;
                    //cout<<amount_array[counter]<<endl;

                    counter++;
                    break;

                case 2:
                    //surgery
                    menu_choice_array[counter] = menu_choice;
                    charge = Calc_surgery_charge(Patient.get_surgery_charge(), counter, submenu_choice, amount);// get surgery charge
                    Patient.set_surgery_charge(charge);
                    submenu_choice_array[counter]= submenu_choice;
                    amount_array[counter] = amount;

                    //Enable code below for testing purpose
                    //cout<<submenu_choice_array[counter]<<endl;
                    //cout<<amount_array[counter]<<endl;

                    counter++;
                    break;

                case 3:
                    //service
                    menu_choice_array[counter] = menu_choice;
                    charge = Calc_service_charge(Patient.get_service_charge(), counter, submenu_choice, amount);//get service charge
                    Patient.set_service_charge(charge);
                    submenu_choice_array[counter]= submenu_choice;
                    amount_array[counter] = amount;

                    //Enable code below for testing purpose
                    //cout<<submenu_choice_array[counter]<<endl;
                    //cout<<amount_array[counter]<<endl;

                    counter++;
                    break;

                case 4:
                    //hospital stay
                    menu_choice_array[counter] = menu_choice;
                    charge = Calc_hospitalstay_charge(Patient.get_hospitalstay_charge(), counter, submenu_choice, amount);//get hospital stay charge
                    Patient.set_hospitalstay_charge(charge);
                    submenu_choice_array[counter]= submenu_choice;
                    amount_array[counter] = amount;

                    //Enable code below for testing purpose
                    //cout<<submenu_choice_array[counter]<<endl;
                    //cout<<amount_array[counter]<<endl;

                    counter++;
                    break;

                case 5:
                    //food and drink
                    menu_choice_array[counter] = menu_choice;
                    charge = Calc_fooddrink_charge(Patient.get_fooddrink_charge(), counter, submenu_choice, amount);// get food drink charge
                    Patient.set_fooddrink_charge(charge);
                    submenu_choice_array[counter]= submenu_choice;
                    amount_array[counter] = amount;

                    //Enable code below for testing purpose
                    //cout<<submenu_choice_array[counter]<<endl;
                    //cout<<amount_array[counter]<<endl;

                    counter++;
                    break;

                case 6:

                    cout << "                           Thank You for Coming " <<endl;//display receipt tittle
                    for(size_t i = 0; i < 100; i++)
                    {
                        cout << "-";
                    }
                    cout << endl;

                    for(size_t j = 0; j < counter; j++)
                    {
                        Display_patient_item(menu_choice_array[j], submenu_choice_array[j], amount_array[j], j);// list out the purchased items
                    }

                    //Get total charge form Calc_Total_Charge Function
                    charge = Calc_Total_Charge(Patient.get_medicine_charge(), Patient.get_surgery_charge(), Patient.get_service_charge(), Patient.get_hospitalstay_charge(), Patient.get_fooddrink_charge());
                    Patient.set_Total_Charge(charge);
                    cout << "Total charges= RM"<< Patient.get_Total_Charge() << endl;
                    cout << endl;
                    exit_status = 'Y';
                    break;
                    
                default:
                    cout<<"Select item on the menu only."<<endl;
                    break;

            //Increase size of pointer array
            // 'if' statement below is to create a temoprary DMA to store menu choice from old DMA
            // Then, the 'if' statement will assign the temoprary DMA to newly created DMA with same name as old DMA
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

            // Increase size of pointer array
            // 'if' statement below is to create a temoprary DMA to store submenu choice from old DMA
            // Then, the 'if' statement will assign the temoprary DMA to newly created DMA with same name as old DMA
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

            // Increase Size of pointer array
            // 'if' statement below is to create a temoprary DMA to store amount from old DMA
            // Then, the 'if' statement will assign the temoprary DMA to newly created DMA with same name as old DMA
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

        //delete pointer array for storing menu choice, submenu choice and maount
        delete []menu_choice_array;
        delete []submenu_choice_array;
        delete []amount_array;
    
        //check if there is any new patient
        choice_new_patient = Check_new_patient();

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