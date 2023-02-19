/* Programmer's info for making this hpp file */
//Name: Raymond Chow Yin Hong
//USM Email: raymondchow@student.usm.my
//GitHub Username: RaymondChowYinHong
//Matric No.: 165011

#ifndef CHECKPATIENT_HPP
#define CHECKPATIENT_HPP

#include <iostream>
#include "main.hpp"
#include "mainmenu.hpp"
using namespace std;

/* Function Purpose  : To display menu to ask availability of new patient     */
void display_checkpatient_menu()
{
    cout << "Any new patient?" << endl;
    cout << "1.Yes\n2.No" << endl;
}

/* Function Purpose  : To accept answer for availability of new patient and return answer to main function*/
int Check_new_patient()
{
        int choice_new_patient;
        
        do{
            if(cin.fail())
            {
                cin.clear();
                cin.ignore();
            }

            display_tittle();
            display_checkpatient_menu();
            cout << "Your choice:";
            cin >> choice_new_patient;
            cout << endl;
            
            
            if(choice_new_patient!=1 && choice_new_patient!=2)
            {
                cout<< "Enter again." <<endl;
            }

        }while(choice_new_patient!=1 && choice_new_patient!=2);//make sure only available option to be accepted

        return choice_new_patient;

}



#endif