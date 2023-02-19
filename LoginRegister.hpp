/* Programmer's info for making this hpp file */
//Name: NG POH QIANG
//USM Email: ngpohqiang@student.usm.my
//GitHub Username:ngpohqiang
//Matric No.: 162703

/* Programmer's info for making this hpp file */
//Name: Raymond Chow Yin Hong
//USM Email: raymondchow@student.usm.my
//GitHub Username: RaymondChowYinHong
//Matric No.: 165011

#ifndef LOGINREGISTER_HPP
#define LOGINREGISTER_HPP

using namespace std;
#include <iostream>
#include <fstream> //because here we are going to use file handling
#include <cstring>
#include <string>
#include "main.hpp"
#include "mainmenu.hpp"
using namespace std;

/* Function Purpose  : To ask for user choice to register or login*/
int LOGIN_REGISTER()
{
   
    int choice;
    char login_status='N';

    while (login_status!='Y')//will keeping looping if user's ID and Password are incorrect
    {
        do{
        if(cin.fail())
        {
            cin.clear();
            cin.ignore();
        }

        display_tittle();
        cout << "Only registered officer can use this system." << endl;
        cout << "1 : Register \n2 : Login\nYour choice :";
        cin>>choice;
        
        if(choice!=1 && choice!=2)
        {
            cout << "Enter again." << endl ;
        }
        }while(choice!=1 && choice!=2);//keep looping until user enter the available option as answer
    
    if (choice == 1)
    {
        Register();  //if user not have account and want to register 

    }

//if user have already account and want to log in then
    else if(choice==2)
     {
    
       bool status =IsloggedIn();

       if(!status)//if not true means your ID and password are not in txt file
       {
          cout<<"Invalid user name or password"<<endl;
          login_status = 'N';

       }
       else //true when your ID and password are found in the txt file
       {
           cout<<"Successfully Logged in"<<endl;
           cout << endl;
           login_status = 'Y';
        
       }
     }
    
    }

    return 0;
}

/* Function Purpose  : To register user's ID and password into txt file*/
void Register()
{
        string identification, password;

        cout << "select a ID :";
        cin >> identification;
        cout << "select a password :";
        cin >> password;




        ofstream write("data.txt", ios::app); // this is to write user id and password into end of file
        write << identification << endl;
        write << password << endl;
        write.close();
}

//this below is for verifying your ID and password
//so here we use bool value that always returns true or false
//if you have account this means true and else false
//verify logged in or not
/* Function Purpose  : To check whether the ID and password are available in the txt file*/
bool IsloggedIn()
{
    string identification, password, id, pw; //last two are comparison string
    int file_counter = 0;
    bool status = false;

    cout << "Enter ID :";
    cin >> identification;

    cout << "Enter password :";
    cin >> password;

    //for reading file that you have account or not
    //if stream for reading the file
    //read is variable here
    ifstream read("data.txt"); //here data.txt where our data will save for us 
    //the file name is written in double cout in file handling



    while (!read.eof( ))      //if not at end of file, continue reading numbers
     {
        getline(read, id);//for reading the user name is that user valid
        getline(read, pw);//reading the password correct or not
        file_counter++;
     }

     read.close();

     string array_id[file_counter], array_pw[file_counter];// arrays to store ID and password from txt file

    ifstream read_again("data.txt"); //here data.txt where our data will save for us 


     for(size_t i = 0; i < file_counter; i++)
     {
        getline(read_again, id);//for reading the user name is that user valid
        getline(read_again, pw);//reading the password correct or not
        array_id[i]=id;//save ID into array
        array_pw[i]=pw;//save password into array
     }

     read_again.close();

    //comparison
    for(size_t j = 0; j <file_counter; j++)
    {
        if (array_id[j] == identification && array_pw[j] == password)
        {
        
            status = true;   //that the user is valid and can log in
        }
    }
    return status;


}



#endif