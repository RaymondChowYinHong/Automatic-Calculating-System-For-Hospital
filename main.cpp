// use class , array in class and capsulation
//create funtion to store patient disease, charges, name and ID

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
        // int menu_choice;
        // int submenu_choice;
        // double amount;
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
        int number_item;

        do
        {
            if(cin.fail())
            {
                cin.clear();
                cin.ignore();
            }
            
            cout << "How many item?"<<endl;
            cin >> number_item;
        } while (cin.fail());

        int menu_choice_array[number_item];
        int submenu_choice_array[number_item];
        double amount_array[number_item];
   


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

            switch(menu_choice)
            {
                case 1:
                    //medcine
                    menu_choice_array[counter] = menu_choice;
                    Patient.medcine_charge = Calc_medcine_charge(Patient.medcine_charge, counter, submenu_choice, amount);
                    submenu_choice_array[counter]= submenu_choice;
                    amount_array[counter] = amount;
                    //cout<<submenu_choice_array[counter]<<endl;
                    //cout<<amount_array[counter]<<endl;
                    counter++;
                    break;
                case 2:
                    //surgery
                    menu_choice_array[counter] = menu_choice;
                    Patient.surgery_charge = Calc_surgery_charge(Patient.surgery_charge, counter, submenu_choice, amount);
                    submenu_choice_array[counter]= submenu_choice;
                    amount_array[counter] = amount;
                    //cout<<submenu_choice_array[counter]<<endl;
                    //cout<<amount_array[counter]<<endl;
                    counter++;
                    break;
                case 3:
                    //service
                    menu_choice_array[counter] = menu_choice;
                    Patient.service_charge = Calc_service_charge(Patient.service_charge, counter, submenu_choice, amount);
                    submenu_choice_array[counter]= submenu_choice;
                    amount_array[counter] = amount;
                    //cout<<submenu_choice_array[counter]<<endl;
                    //cout<<amount_array[counter]<<endl;
                    counter++;
                    break;
                case 4:
                    //hospital stay
                    menu_choice_array[counter] = menu_choice;
                    Patient.hospitalstay_charge = Calc_hospitalstay_charge(Patient.hospitalstay_charge, counter, submenu_choice, amount);
                    submenu_choice_array[counter]= submenu_choice;
                    amount_array[counter] = amount;
                    //cout<<submenu_choice_array[counter]<<endl;
                    //cout<<amount_array[counter]<<endl;
                    counter++;
                    break;
                case 5:
                    //food and drink
                    menu_choice_array[counter] = menu_choice;
                    Patient.fooddrink_charge = Calc_fooddrink_charge(Patient.fooddrink_charge, counter, submenu_choice, amount);
                    submenu_choice_array[counter]= submenu_choice;
                    amount_array[counter] = amount;
                    //cout<<submenu_choice_array[counter]<<endl;
                    //cout<<amount_array[counter]<<endl;
                    counter++;
                    break;
                case 6:
                    //Total charges
                    if(number_item != (counter))
                    {
                        cout << "Amount of item selected is not equal to number of item stated." << endl;
                        cout << "Current calculation of charges will be canceled." << endl;
                        cout << endl;
                        exit_status = 'Y';
                        break;
                    }

                    for(size_t j = 0; j < number_item; j++)
                    {
                        menu_choice = menu_choice_array[j];
                        submenu_choice = submenu_choice_array[j];
                        amount = amount_array[j];
                        Display_patient_item(menu_choice, submenu_choice, amount, j);
                    }

                    Patient.Total_Charge = Calc_Total_Charge(Patient.medcine_charge, Patient.surgery_charge, Patient.service_charge, Patient.hospitalstay_charge, Patient.fooddrink_charge);
                    cout << "Total charges= RM"<< Patient.Total_Charge << endl;
                    cout << endl;
                    exit_status = 'Y';
                    break;
                default:
                    cout<<"Select item on the menu only."<<endl;
                    break;
            }

        }while(exit_status!='Y' || cin.fail());

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

// void display_menu()
// {
//     cout<<"Select your choice."<<endl;
//     cout<<" 1. Medcine\n 2. Surgery\n 3. Service\n 4. Hospital Stay\n 5. Food and Drink\n 6. Exit (Total Charges)\n";
// }

// void display_medcine_menu()
// {
//     cout<<"Select your choice."<<endl;
//     cout<<" 1. Norvac(amlodipine)10 mg tablet \tRM8\n 2. Lipitor (atorvastatin)20 mg tablet \tRM7\n 3. Glucovance(metformin+glyburide) 5 mg tablet \tRM2\n 4. Diamicron(gliclazide)80 mg tablet \tRM1\n 5. Noten(atenolol)50 mg tablet \tRM0.50\n 6. Ventolin 2.5 mg dose \tRM4\n";
// }

// double Calc_medcine_charge(double medcine_charge, int counter, int &submenu_choice, double &amount)
// {
//     int medcine_choice;
//     double amount_medcine;

//     do
//     {
//             if(cin.fail())
//             {
//                 cin.clear();
//                 cin.ignore();
//             }

//             display_medcine_menu();
//             cin>> medcine_choice;
//             cout << endl;

//             if(medcine_choice!=1 && medcine_choice!=2 && medcine_choice!=3 && medcine_choice!=4 && medcine_choice!=5 && medcine_choice!=6)
//             {
//                 cout << "Enter again."<<endl;
//             }
//     } while (medcine_choice!=1 && medcine_choice!=2 && medcine_choice!=3 && medcine_choice!=4 && medcine_choice!=5 && medcine_choice!=6);

//     submenu_choice = medcine_choice;

//     do
//     {
//             if(cin.fail())
//             {
//                 cin.clear();
//                 cin.ignore();
//             }
            
//             cout << "Enter amount."<<endl;
//             cin>> amount_medcine;
//             cout << endl;

//             if(amount_medcine <0 || cin.fail())
//             {
//                 cout << "Enter again."<<endl;
//             }
//     } while (amount_medcine <0 || cin.fail());

//     amount = amount_medcine;
            

//     switch(medcine_choice)
//     {
//             case 1:
//                 cout << (counter+1) << ". Norvac(amlodipine)10 mg tablet RM" << amount*8 << endl;
//                 medcine_charge = medcine_charge + amount*8;
//                 cout << endl;
//                 break;
//             case 2:
//                 cout << (counter+1) << ". Lipitor (atorvastatin)20 mg tablet RM" << amount*7 << endl;
//                 medcine_charge = medcine_charge + amount*7;
//                 cout << endl;
//                 break;
//             case 3:
//                 cout << (counter+1) << ". Glucovance(metformin+glyburide) 5 mg tablet RM" << amount*2 << endl;
//                 medcine_charge = medcine_charge + amount*2;
//                 cout << endl;
//                 break;
//             case 4:
//                 cout << (counter+1) << ". Diamicron(gliclazide)80 mg tablet RM" << amount*1 << endl;
//                 medcine_charge = medcine_charge + amount*1;
//                 break;
//             case 5:
//                 cout << (counter+1) << ". Noten(atenolol)50 mg tablet RM" << amount*0.50 << endl;
//                 medcine_charge = medcine_charge + amount*0.5;
//                 cout << endl;
//                 break;
//             case 6:
//                 cout << (counter+1) << ". Ventolin 2.5 mg dose RM" << amount*4 << endl;
//                 medcine_charge = medcine_charge + amount*4;
//                 cout << endl;
//                 break;
//             default:
//                 cout << "Enter again."<<endl;
//                 cout << endl;
//                 break;
//     }

//     return medcine_charge;   
// }

// void display_surgery_menu()
// {
//     cout<<"Select your choice."<<endl;
//     cout<<" 1. Angiogram\tRM200\n 2. Coronary Bypass\tRM4000\n 3. Knee Replacement Surgery\tRM10000\n 4. Spine Surgery\tRM8000\n 5. Kidney Stone\tRM3000\n 6. Chemotherapy\tRM200\n";
// }

// double Calc_surgery_charge(double surgery_charge, int counter, int &submenu_choice, double &amount)
// {
//     int surgery_choice;
//     int amount_surgery;

//     do
//     {
//             if(cin.fail())
//             {
//                 cin.clear();
//                 cin.ignore();
//             }
            
//             display_surgery_menu();
//             cin>> surgery_choice;
//             cout << endl;

//             if(surgery_choice!=1 && surgery_choice!=2 && surgery_choice!=3 && surgery_choice!=4 && surgery_choice!=5 && surgery_choice!=6)
//             {
//                 cout << "Enter again."<<endl;
//             }
//     } while (surgery_choice!=1 && surgery_choice!=2 && surgery_choice!=3 && surgery_choice!=4 && surgery_choice!=5 && surgery_choice!=6);

//     submenu_choice = surgery_choice;

//     do
//     {
//             if(cin.fail())
//             {
//                 cin.clear();
//                 cin.ignore();
//             }
            
//             cout << "Enter frequency."<<endl;
//             cin>>amount_surgery;
//             cout << endl;

//             if(amount_surgery <0 || cin.fail())
//             {
//                 cout << "Enter again."<<endl;
//             }
//     } while (amount_surgery <0 || cin.fail());

//     double frequency = static_cast<double>(amount_surgery);
//     amount = frequency;
            
//     switch(surgery_choice)
//     {
//             case 1:
//                 cout << (counter+1) << ". Angiogram RM" << frequency*200 << endl;
//                 surgery_charge = surgery_charge + frequency*200;
//                 cout << endl;
//                 break;
//             case 2:
//                 cout << (counter+1) << ". Coronary Bypass RM" << frequency*4000 << endl;
//                 surgery_charge = surgery_charge + frequency*4000;
//                 cout << endl;
//                 break;
//             case 3:
//                 cout << (counter+1) << ". Knee Replacement Surgery RM" << frequency*10000 << endl;
//                 surgery_charge = surgery_charge + frequency*10000;
//                 cout << endl;
//                 break;
//             case 4:
//                 cout << (counter+1) << ". Spine Surgery RM" << frequency*8000 << endl;
//                 surgery_charge = surgery_charge + frequency*8000;
//                 cout << endl;
//                 break;
//             case 5:
//                 cout << (counter+1) << ". Kidney Stone RM" << frequency*3000 << endl;
//                 surgery_charge = surgery_charge + frequency*3000;
//                 cout << endl;
//                 break;
//             case 6:
//                 cout << (counter+1) << ". Chemotherapy RM" << frequency*200 << endl;
//                 surgery_charge = surgery_charge + frequency*200;
//                 cout << endl;
//                 break;
//             default:
//                 cout << "Enter again."<<endl;
//                 cout << endl;
//                 break;
//     }
    
//     return surgery_charge;
// }

// void display_service_menu()
// {
//     cout<<"Select your choice."<<endl;
//     cout<<" 1. Consultation\tRM1\n 2. X-Ray\tRM35\n 3. Ultrasound\tRM10\n 4. Angiography\tRM75\n 5. Blood Test\tRM1\n 6. CT Scan\tRM450\n";
// }

// double Calc_service_charge(double service_charge, int counter, int &submenu_choice, double &amount)
// {
//     int service_choice;
//     int amount_service;

//     do
//     {
//             if(cin.fail())
//             {
//                 cin.clear();
//                 cin.ignore();
//             }
            
//             display_service_menu();
//             cin>> service_choice;
//             cout << endl;

//             if(service_choice!=1 && service_choice!=2 && service_choice!=3 && service_choice!=4 && service_choice!=5 && service_choice!=6)
//             {
//                 cout << "Enter again."<<endl;
//             }
//     } while (service_choice!=1 && service_choice!=2 && service_choice!=3 && service_choice!=4 && service_choice!=5 && service_choice!=6);

//     submenu_choice = service_choice;

//     do
//     {
//             if(cin.fail())
//             {
//                 cin.clear();
//                 cin.ignore();
//             }
            
//             cout << "Enter frequency."<<endl;
//             cin>>amount_service;
//             cout << endl;

//             if(amount_service <0 || cin.fail())
//             {
//                 cout << "Enter again."<<endl;
//             }
//     } while (amount_service <0 || cin.fail());

//     double frequency = static_cast<double>(amount_service);
//     amount = frequency;
            
//     switch(service_choice)
//     {
//             case 1:
//                 cout << (counter+1) << ". Consultation RM" << frequency*1 << endl;
//                 service_charge = service_charge + frequency*1;
//                 cout << endl;
//                 break;
//             case 2:
//                 cout << (counter+1) << ". X_Ray RM" << frequency*35 << endl;
//                 service_charge = service_charge + frequency*35;
//                 cout << endl;
//                 break;
//             case 3:
//                 cout << (counter+1) << ". Ultrasound RM" << frequency*10 << endl;
//                 service_charge = service_charge + frequency*10;
//                 cout << endl;
//                 break;
//             case 4:
//                 cout << (counter+1) << ". Angiography RM" << frequency*75 << endl;
//                 service_charge = service_charge + frequency*75;
//                 cout << endl;
//                 break;
//             case 5:
//                 cout << (counter+1) << ". Blood Test RM" << frequency*1 << endl;
//                 service_charge = service_charge + frequency*1;
//                 cout << endl;
//                 break;
//             case 6:
//                 cout << (counter+1) << ". CT Scan RM" << frequency*450 << endl;
//                 service_charge = service_charge + frequency*450;
//                 cout << endl;
//                 break;
//             default:
//                 cout << "Enter again."<<endl;
//                 cout << endl;
//                 break;
//     }
//     return service_charge;
// }

// void display_hospitalstay_menu()
// {
//     cout<<"Select your choice."<<endl;
//     cout<<" 1. ICU\tRM265\n 2. HDU\tRM185\n 3. Single Deluxe\tRM600\n 4. Single Standard\tRM300\n 5. Double Bedded\tRM160\n 6. 4-Bedded\tRM120\n";
// }

// double Calc_hospitalstay_charge(double hospitalstay_charge, int counter, int &submenu_choice, double &amount)
// {
//     int hospitalstay_choice;
//     int amount_hospitalstay;

//     do
//     {
//             if(cin.fail())
//             {
//                 cin.clear();
//                 cin.ignore();
//             }

//             display_hospitalstay_menu();
//             cin>> hospitalstay_choice;
//             cout << endl;

//             if(hospitalstay_choice!=1 && hospitalstay_choice!=2 && hospitalstay_choice!=3 && hospitalstay_choice!=4 && hospitalstay_choice!=5 && hospitalstay_choice!=6)
//             {
//                 cout << "Enter again."<<endl;
//             }
//     } while (hospitalstay_choice!=1 && hospitalstay_choice!=2 && hospitalstay_choice!=3 && hospitalstay_choice!=4 && hospitalstay_choice!=5 && hospitalstay_choice!=6);
    
//     submenu_choice = hospitalstay_choice;
//     do
//     {
//             if(cin.fail())
//             {
//                 cin.clear();
//                 cin.ignore();
//             }
            
//             cout << "Enter frequency(day)."<<endl;
//             cin>>amount_hospitalstay;
//             cout << endl;

//             if(amount_hospitalstay <0 || cin.fail())
//             {
//                 cout << "Enter again."<<endl;
//             }
//     } while (amount_hospitalstay <0 || cin.fail());

//     double frequency = static_cast<double>(amount_hospitalstay);
//     amount = frequency;
            
//     switch(hospitalstay_choice)
//     {
//             case 1:
//                 cout << (counter+1) << ". ICU RM" << frequency*265 << endl;
//                 hospitalstay_charge = hospitalstay_charge + frequency*265;
//                 cout << endl;
//                 break;
//             case 2:
//                 cout << (counter+1) << ". HDU RM" << frequency*185 << endl;
//                 hospitalstay_charge = hospitalstay_charge + frequency*185;
//                 cout << endl;
//                 break;
//             case 3:
//                 cout << (counter+1) << ". Single Deluxe RM" << frequency*600 << endl;
//                 hospitalstay_charge = hospitalstay_charge + frequency*600;
//                 cout << endl;
//                 break;
//             case 4:
//                 cout << (counter+1) << ". Single Standard RM" << frequency*300 << endl;
//                 hospitalstay_charge = hospitalstay_charge + frequency*300;
//                 cout << endl;
//                 break;
//             case 5:
//                 cout << (counter+1) << ". Double Bedded RM" << frequency*160 << endl;
//                 hospitalstay_charge = hospitalstay_charge + frequency*160;
//                 cout << endl;
//                 break;
//             case 6:
//                 cout << (counter+1) << ". 4-Bedded RM" << frequency*120 << endl;
//                 hospitalstay_charge = hospitalstay_charge + frequency*120;
//                 cout << endl;
//                 break;
//             default:
//                 cout << "Enter again."<<endl;
//                 break;
//     }
//     return hospitalstay_charge;
// }

// void display_fooddrink_menu()
// {
//     cout<<"Select your choice."<<endl;
//     cout<<" 1. Chicken Rice\tRM8\n 2. Ginger Fish With Brown Rice\tRM12\n 3. Chicken Croissant\tRM6\n 4. Nasi Lemak\tRM4\n 5. Fish Fillet With Brown Rice\tRM9\n 6. Apple Juice\tRM3\n";
// }

// double Calc_fooddrink_charge(double fooddrink_charge, int counter, int &submenu_choice, double &amount)
// {
//     int fooddrink_choice;
//     int amount_fooddrink;

//     do
//     {
//             if(cin.fail())
//             {
//                 cin.clear();
//                 cin.ignore();
//             }

//             display_fooddrink_menu();
//             cin>> fooddrink_choice;
//             cout << endl;

//             if(fooddrink_choice!=1 && fooddrink_choice!=2 && fooddrink_choice!=3 && fooddrink_choice!=4 && fooddrink_choice!=5 && fooddrink_choice!=6)
//             {
//                 cout << "Enter again."<<endl;
//             }
//     } while (fooddrink_choice!=1 && fooddrink_choice!=2 && fooddrink_choice!=3 && fooddrink_choice!=4 && fooddrink_choice!=5 && fooddrink_choice!=6);

//     submenu_choice = fooddrink_choice;

//     do
//     {
//             if(cin.fail())
//             {
//                 cin.clear();
//                 cin.ignore();
//             }
            
//             cout << "Enter amount."<<endl;
//             cin>>amount_fooddrink;
//             cout << endl;

//             if(amount_fooddrink <0 || cin.fail())
//             {
//                 cout << "Enter again."<<endl;
//             }
//     } while (amount_fooddrink <0 || cin.fail());

//     double frequency = static_cast<double>(amount_fooddrink);
//     amount = frequency;
            
//     switch(fooddrink_choice)
//     {
//             case 1:
//                 cout << (counter+1) << ". Chicken Rice RM" << frequency*8 << endl;
//                 fooddrink_charge = fooddrink_charge + frequency*8;
//                 cout << endl;
//                 break;
//             case 2:
//                 cout << (counter+1) << ". Ginger Fish With Brown Rice RM" << frequency*12 << endl;
//                 fooddrink_charge = fooddrink_charge + frequency*12;
//                 cout << endl;
//                 break;
//             case 3:
//                 cout << (counter+1) << ". Chicken Croissant RM" << frequency*6 << endl;
//                 fooddrink_charge = fooddrink_charge + frequency*6;
//                 cout << endl;
//                 break;
//             case 4:
//                 cout << (counter+1) << ". Nasi Lemak RM" << frequency*4 << endl;
//                 fooddrink_charge = fooddrink_charge + frequency*4;
//                 cout << endl;
//                 break;
//             case 5:
//                 cout << (counter+1) << ". Fish Fillet With Brown Rice RM" << frequency*9 << endl;
//                 fooddrink_charge = fooddrink_charge + frequency*9;
//                 cout << endl;
//                 break;
//             case 6:
//                 cout << (counter+1) << ". Apple Juice RM" << frequency*3 << endl;
//                 fooddrink_charge = fooddrink_charge + frequency*3;
//                 cout << endl;
//                 break;
//             default:
//                 cout << "Enter again."<<endl;
//                 break;
//     }
//     return fooddrink_charge;
// }

// void Display_patient_item(int menu_choice, int submenu_choice, double amount, size_t j )
// {
//     if(menu_choice == 1)
//     {
//         if(submenu_choice == 1)
//         {
//             cout << (j+1) << ". Norvac(amlodipine)10 mg tablet RM8*" << amount << "= RM" << 8*amount << endl;
//         }
//         else if(submenu_choice == 2)
//         {
//             cout << (j+1) << ". Lipitor (atorvastatin)20 mg tablet RM7*" << amount << "= RM" << 7*amount << endl;
//         }
//         else if(submenu_choice ==3)
//         {
//             cout << (j+1) << ". Glucovance(metformin+glyburide) 5 mg tablet RM2*" << amount << "= RM" << 2*amount << endl;
//         }
//         else if(submenu_choice == 4)
//         {
//             cout << (j+1) << ". Diamicron(gliclazide)80 mg tablet RM1*" << amount << "= RM" << 1*amount << endl;
//         }
//         else if(submenu_choice == 5)
//         {
//             cout << (j+1) << ". Noten(atenolol)50 mg tablet RM0.50*" << amount << "= RM" << 0.5*amount << endl;
//         }
//         else if(submenu_choice == 6)
//         {
//             cout << (j+1) << ". Ventolin 2.5 mg dose RM4*" << amount << "= RM" << 4*amount << endl;
//         }
//         else
//         {
//             cout << "Something is wrong, please contact the IT department." << endl;
//         }

//     }
//     else if(menu_choice == 2)
//     {
//         if(submenu_choice == 1)
//         {
//             cout << (j+1) << ". Angiogram RM200*" << amount << "= RM" << 200*amount << endl;
//         }
//         else if(submenu_choice == 2)
//         {
//             cout << (j+1) << ". Coronary Bypass RM4000*" << amount << "= RM" << 4000*amount << endl;
//         }
//         else if(submenu_choice == 3)
//         {
//             cout << (j+1) << ". Knee Replacement Surgery RM10000*" << amount << "= RM" << 10000*amount << endl;
//         }
//         else if(submenu_choice == 4)
//         {
//             cout << (j+1) << ". Spine Surgery RM8000*" << amount << "= RM" << 8000*amount << endl;
//         }
//         else if(submenu_choice == 5)
//         {
//             cout << (j+1) << ". Kidney Stone RM3000*" << amount << "= RM" << 3000*amount << endl;

//         }
//         else if(submenu_choice == 6)
//         {
//             cout << (j+1) << ". Chemotherapy RM200*" << amount << "= RM" << 200*amount << endl;
//         }
//         else
//         {
//             cout << "Something is wrong, please contact the IT department." << endl;
//         }
//     }
//     else if(menu_choice == 3)
//     {
//         if(submenu_choice == 1)
//         {
//             cout << (j+1) << ". Consultation RM1*" << amount << "= RM" << 1*amount << endl;
//         }
//         else if(submenu_choice == 2)
//         {
//             cout << (j+1) << ". X-Ray RM35*" << amount << "= RM" << 35*amount << endl;
//         }
//         else if(submenu_choice == 3)
//         {
//             cout << (j+1) << ". Ultrasound RM10*" << amount << "= RM" << 10*amount << endl;
//         }
//         else if(submenu_choice == 4)
//         {
//             cout << (j+1) << ". Angiography RM75*" << amount << "= RM" << 75*amount << endl;
//         }
//         else if(submenu_choice == 5)
//         {
//             cout << (j+1) << ". Blood Test RM1*" << amount << "= RM" << 1*amount << endl;
//         }
//         else if(submenu_choice == 6)
//         {
//             cout << (j+1) << ". CT Scan RM450*" << amount << "= RM" << 450*amount << endl;
//         }
//         else
//         {
//             cout << "Something is wrong, please contact the IT department." << endl;
//         }
//     }
//     else if(menu_choice == 4)
//     {
//         if(submenu_choice == 1)
//         {
//             cout << (j+1) << ". ICU RM265*" << amount << "= RM" << 265*amount << endl;
//         }
//         else if(submenu_choice == 2)
//         {
//             cout << (j+1) << ". HDU RM185*" << amount << "= RM" << 185*amount << endl;
//         }
//         else if(submenu_choice == 3)
//         {
//             cout << (j+1) << ". Single Deluxe RM600*" << amount << "= RM" << 600*amount << endl;
//         }
//         else if(submenu_choice == 4)
//         {
//             cout << (j+1) << ". Single Standard RM300*" << amount << "= RM" << 300*amount << endl;
//         }
//         else if(submenu_choice == 5)
//         {
//             cout << (j+1) << ". Double Bedded RM160*" << amount << "= RM" << 160*amount << endl;
//         }
//         else if(submenu_choice == 6)
//         {
//             cout << (j+1) << ". 4-Bedded RM120*" << amount << "= RM" << 120*amount << endl;
//         }
//         else
//         {
//             cout << "Something is wrong, please contact the IT department." << endl;
//         }
//     }
//     else if(menu_choice == 5)
//     {
//         if(submenu_choice == 1)
//         {
//             cout << (j+1) << ". Chicken Rice RM8*" << amount << "= RM" << 8*amount << endl;
//         }
//         else if(submenu_choice == 2)
//         {
//             cout << (j+1) << ". Ginger Fish With Brown Rice RM12*" << amount << "= RM" << 12*amount << endl;
//         }
//         else if(submenu_choice == 3)
//         {
//             cout << (j+1) << ". Chicken Croissant RM6*" << amount << "= RM" << 6*amount << endl;
//         }
//         else if(submenu_choice == 4)
//         {
//             cout << (j+1) << ". Nasi Lemak RM4*" << amount << "= RM" << 4*amount << endl;
//         }
//         else if(submenu_choice == 5)
//         {
//             cout << (j+1) << ". Fish Fillet With Brown Rice RM9*" << amount << "= RM" << 9*amount << endl;
//         }
//         else if(submenu_choice == 6)
//         {
//             cout << (j+1) << ". Apple Juice RM3*" << amount << "= RM" << 3*amount << endl;
//         }
//         else
//         {
//             cout << "Something is wrong, please contact the IT department." << endl;
//         }
//     }

// }

// double Calc_Total_Charge(double medcine_charge, double surgery_charge, double service_charge, double hospitalstay_charge, double fooddrink_charge)
// {
//     return (medcine_charge + surgery_charge + service_charge + hospitalstay_charge + fooddrink_charge);
// }