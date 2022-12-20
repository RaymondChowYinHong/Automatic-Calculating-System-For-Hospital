//create food function
//create funtion to store patient disease, charges, name and ID
#include <iostream>
using namespace std;

void displaymenu();
double Calc_Total_Charge(double , double , double , double );
double Calc_medcine_charge(double , int&);
double Calc_surgery_charge(double , int&);
double Calc_service_charge(double , int&);
double Calc_hospitalstay_charge(double, int&);

int main()
{
    char new_patient = 'Y';
    int choice_new_patient;

    while(new_patient!='N')
    {
        char exit_status = 'N';

        double medcine_charge=0, surgery_charge=0, service_charge=0, hospitalstay_charge=0, Total_Charge=0;

        int counter = 1;

        do{
            int menu_choice;

            if(cin.fail())
            {
                cin.clear();
                cin.ignore();
            }

            displaymenu();
            cin>> menu_choice;
            cout << endl;

            switch(menu_choice)
            {
                case 1:
                    //medcine
                    medcine_charge = Calc_medcine_charge(medcine_charge, counter);
                    break;
                case 2:
                    //surgery
                    surgery_charge = Calc_surgery_charge(surgery_charge, counter);
                    break;
                case 3:
                    //service
                    service_charge = Calc_service_charge(service_charge, counter);
                    break;
                case 4:
                    //hospital stay
                    hospitalstay_charge = Calc_hospitalstay_charge(hospitalstay_charge, counter);
                    break;
                case 5:
                    //Total charges
                    Total_Charge = Calc_Total_Charge(medcine_charge, surgery_charge, service_charge, hospitalstay_charge);
                    cout << "Total charges= RM"<< Total_Charge << endl;
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

void displaymenu()
{
    cout<<"Select your choice."<<endl;
    cout<<" 1. Medcine\n 2. Surgery\n 3. Service\n 4. Hospital Stay\n 5. Exit (Total Charges)\n";
}

double Calc_medcine_charge(double medcine_charge, int &counter)
{
    int medcine_choice;
    double amount;

    do
    {
            if(cin.fail())
            {
                cin.clear();
                cin.ignore();
            }

            cout<<"Select your choice."<<endl;
            cout<<" 1. Norvac(amlodipine)10 mg tablet \tRM8\n 2. Lipitor (atorvastatin)20 mg tablet \tRM7\n 3. Glucovance(metformin+glyburide) 5 mg tablet \tRM2\n 4. Diamicron(gliclazide)80 mg tablet \tRM1\n 5. Noten(atenolol)50 mg tablet \tRM0.50\n 6. Ventolin 2.5 mg dose \tRM4\n";
            cin>> medcine_choice;
            cout << endl;

            if(medcine_choice!=1 && medcine_choice!=2 && medcine_choice!=3 && medcine_choice!=4 && medcine_choice!=5 && medcine_choice!=6)
            {
                cout << "Enter again."<<endl;
            }
    } while (medcine_choice!=1 && medcine_choice!=2 && medcine_choice!=3 && medcine_choice!=4 && medcine_choice!=5 && medcine_choice!=6);

    do
    {
            if(cin.fail())
            {
                cin.clear();
                cin.ignore();
            }
            
            cout << "Enter amount."<<endl;
            cin>>amount;
            cout << endl;

            if(amount<0 || cin.fail())
            {
                cout << "Enter again."<<endl;
            }
    } while (amount<0 || cin.fail());
            

    switch(medcine_choice)
    {
            case 1:
                cout << counter << ". Norvac(amlodipine)10 mg tablet RM" << amount*8 << endl;
                medcine_charge = medcine_charge + amount*8;
                cout << endl;
                counter++;
                break;
            case 2:
                cout << counter << ". Lipitor (atorvastatin)20 mg tablet RM" << amount*7 << endl;
                medcine_charge = medcine_charge + amount*7;
                cout << endl;
                counter++;
                break;
            case 3:
                cout << counter << ". Glucovance(metformin+glyburide) 5 mg tablet RM" << amount*2 << endl;
                medcine_charge = medcine_charge + amount*2;
                cout << endl;
                counter++;
                break;
            case 4:
                cout << counter << ". Diamicron(gliclazide)80 mg tablet RM" << amount*1 << endl;
                medcine_charge = medcine_charge + amount*1;
                cout << endl;
                counter++;
                break;
            case 5:
                cout << counter << ". Noten(atenolol)50 mg tablet RM" << amount*0.50 << endl;
                medcine_charge = medcine_charge + amount*0.5;
                cout << endl;
                counter++;
                break;
            case 6:
                cout << counter << ". Ventolin 2.5 mg dose RM" << amount*4 << endl;
                medcine_charge = medcine_charge + amount*4;
                cout << endl;
                counter++;
                break;
            default:
                cout << "Enter again."<<endl;
                cout << endl;
                break;
    }

    return medcine_charge;   
}

double Calc_surgery_charge(double surgery_charge, int &counter)
{
    int surgery_choice;
    int amount;

    do
    {
            if(cin.fail())
            {
                cin.clear();
                cin.ignore();
            }

            cout<<"Select your choice."<<endl;
            cout<<" 1. Angiogram\tRM200\n 2. Coronary Bypass\tRM4000\n 3. Knee Replacement Surgery\tRM10000\n 4. Spine Surgery\tRM8000\n 5. Kidney Stone\tRM3000\n 6. Chemotherapy\tRM200\n";
            cin>> surgery_choice;
            cout << endl;

            if(surgery_choice!=1 && surgery_choice!=2 && surgery_choice!=3 && surgery_choice!=4 && surgery_choice!=5 && surgery_choice!=6)
            {
                cout << "Enter again."<<endl;
            }
    } while (surgery_choice!=1 && surgery_choice!=2 && surgery_choice!=3 && surgery_choice!=4 && surgery_choice!=5 && surgery_choice!=6);

    do
    {
            if(cin.fail())
            {
                cin.clear();
                cin.ignore();
            }
            
            cout << "Enter frequency."<<endl;
            cin>>amount;
            cout << endl;

            if(amount<0 || cin.fail())
            {
                cout << "Enter again."<<endl;
            }
    } while (amount<0 || cin.fail());

    double frequency = static_cast<double>(amount);
            
    switch(surgery_choice)
    {
            case 1:
                cout << counter << ". Angiogram RM" << frequency*200 << endl;
                surgery_charge = surgery_charge + frequency*200;
                cout << endl;
                counter++;
                break;
            case 2:
                cout << counter << ". Coronary Bypass RM" << frequency*4000 << endl;
                surgery_charge = surgery_charge + frequency*4000;
                cout << endl;
                counter++;
                break;
            case 3:
                cout << counter << ". Knee Replacement Surgery RM" << frequency*10000 << endl;
                surgery_charge = surgery_charge + frequency*10000;
                cout << endl;
                counter++;
                break;
            case 4:
                cout << counter << ". Spine Surgery RM" << frequency*8000 << endl;
                surgery_charge = surgery_charge + frequency*8000;
                cout << endl;
                counter++;
                break;
            case 5:
                cout << counter << ". Kidney Stone RM" << frequency*3000 << endl;
                surgery_charge = surgery_charge + frequency*3000;
                cout << endl;
                counter++;
                break;
            case 6:
                cout << counter << ". Chemotherapy RM" << frequency*200 << endl;
                surgery_charge = surgery_charge + frequency*200;
                cout << endl;
                counter++;
                break;
            default:
                cout << "Enter again."<<endl;
                cout << endl;
                break;
    }
    
    return surgery_charge;
}

double Calc_service_charge(double service_charge, int &counter)
{
    int service_choice;
    int amount;

    do
    {
            if(cin.fail())
            {
                cin.clear();
                cin.ignore();
            }

            cout<<"Select your choice."<<endl;
            cout<<" 1. Consultation\tRM1\n 2. X-Ray\tRM35\n 3. Ultrasound\tRM10\n 4. Angiography\tRM75\n 5. Blood Test\tRM1\n 6. CT Scan\tRM450\n";
            cin>> service_choice;
            cout << endl;

            if(service_choice!=1 && service_choice!=2 && service_choice!=3 && service_choice!=4 && service_choice!=5 && service_choice!=6)
            {
                cout << "Enter again."<<endl;
            }
    } while (service_choice!=1 && service_choice!=2 && service_choice!=3 && service_choice!=4 && service_choice!=5 && service_choice!=6);

    do
    {
            if(cin.fail())
            {
                cin.clear();
                cin.ignore();
            }
            
            cout << "Enter frequency."<<endl;
            cin>>amount;
            cout << endl;

            if(amount<0 || cin.fail())
            {
                cout << "Enter again."<<endl;
            }
    } while (amount<0 || cin.fail());

    double frequency = static_cast<double>(amount);
            
    switch(service_choice)
    {
            case 1:
                cout << counter << ". Consultation RM" << frequency*1 << endl;
                service_charge = service_charge + frequency*1;
                cout << endl;
                counter++;
                break;
            case 2:
                cout << counter << ". X_Ray RM" << frequency*35 << endl;
                service_charge = service_charge + frequency*35;
                cout << endl;
                counter++;
                break;
            case 3:
                cout << counter << ". Ultrasound RM" << frequency*10 << endl;
                service_charge = service_charge + frequency*10;
                cout << endl;
                counter++;
                break;
            case 4:
                cout << counter << ". Angiography RM" << frequency*75 << endl;
                service_charge = service_charge + frequency*75;
                cout << endl;
                counter++;
                break;
            case 5:
                cout << counter << ". Blood Test RM" << frequency*1 << endl;
                service_charge = service_charge + frequency*1;
                cout << endl;
                counter++;
                break;
            case 6:
                cout << counter << ". CT Scan RM" << frequency*450 << endl;
                service_charge = service_charge + frequency*450;
                cout << endl;
                counter++;
                break;
            default:
                cout << "Enter again."<<endl;
                cout << endl;
                break;
    }
    return service_charge;
}

double Calc_hospitalstay_charge(double hospitalstay_charge, int &counter)
{
    int hospitalstay_choice;
    int amount;

    do
    {
            if(cin.fail())
            {
                cin.clear();
                cin.ignore();
            }

            cout<<"Select your choice."<<endl;
            cout<<" 1. ICU\tRM265\n 2. HDU\tRM185\n 3. Single Deluxe\tRM600\n 4. Single Standard\tRM300\n 5. Double Bedded\tRM160\n 6. 4-Bedded\tRM120\n";
            cin>> hospitalstay_choice;
            cout << endl;

            if(hospitalstay_choice!=1 && hospitalstay_choice!=2 && hospitalstay_choice!=3 && hospitalstay_choice!=4 && hospitalstay_choice!=5 && hospitalstay_choice!=6)
            {
                cout << "Enter again."<<endl;
            }
    } while (hospitalstay_choice!=1 && hospitalstay_choice!=2 && hospitalstay_choice!=3 && hospitalstay_choice!=4 && hospitalstay_choice!=5 && hospitalstay_choice!=6);

    do
    {
            if(cin.fail())
            {
                cin.clear();
                cin.ignore();
            }
            
            cout << "Enter frequency(day)."<<endl;
            cin>>amount;
            cout << endl;

            if(amount<0 || cin.fail())
            {
                cout << "Enter again."<<endl;
            }
    } while (amount<0 || cin.fail());

    double frequency = static_cast<double>(amount);
            
    switch(hospitalstay_choice)
    {
            case 1:
                cout << counter << ". ICU RM" << frequency*265 << endl;
                hospitalstay_charge = hospitalstay_charge + frequency*265;
                cout << endl;
                counter++;
                break;
            case 2:
                cout << counter << ". HDU RM" << frequency*185 << endl;
                hospitalstay_charge = hospitalstay_charge + frequency*185;
                cout << endl;
                counter++;
                break;
            case 3:
                cout << counter << ". Single Deluxe RM" << frequency*600 << endl;
                hospitalstay_charge = hospitalstay_charge + frequency*600;
                cout << endl;
                counter++;
                break;
            case 4:
                cout << counter << ". Single Standard RM" << frequency*300 << endl;
                hospitalstay_charge = hospitalstay_charge + frequency*300;
                cout << endl;
                counter++;
                break;
            case 5:
                cout << counter << ". Double Bedded RM" << frequency*160 << endl;
                hospitalstay_charge = hospitalstay_charge + frequency*160;
                cout << endl;
                counter++;
                break;
            case 6:
                cout << counter << ". 4-Bedded RM" << frequency*120 << endl;
                hospitalstay_charge = hospitalstay_charge + frequency*120;
                cout << endl;
                counter++;
                break;
            default:
                cout << "Enter again."<<endl;
                break;
    }
    return hospitalstay_charge;
}

double Calc_Total_Charge(double medcine_charge, double surgery_charge, double service_charge, double hospitalstay_charge)
{
    return (medcine_charge + surgery_charge + service_charge + hospitalstay_charge);
}