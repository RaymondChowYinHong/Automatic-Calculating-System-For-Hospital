/* Programmer's info for making this hpp file */
//Name: Raymond Chow Yin Hong
//USM Email: raymondchow@student.usm.my
//GitHub Username: RaymondChowYinHong
//Matric No.: 165011

#ifndef MAINMENU_HPP
#define MAINMENU_HPP

#include <iostream>
#include "main.hpp"
using namespace std;

/* Function Purpose  : To display the tittle*/
void display_tittle()
{
    cout << "                           Welcome to EEE123 Group 12 Hospital " <<endl;
    for(size_t i = 0; i < 100; i++)
    {
        cout << "-";
    }

    cout << endl;
}

/* Function Purpose  : To display the type of charge*/
void display_menu()
{
    cout<<"Select your choice."<<endl;
    cout<<" 1. Medcine\n 2. Surgery\n 3. Service\n 4. Hospital Stay\n 5. Food and Drink\n 6. Exit (Total Charges)\n";
}

#endif