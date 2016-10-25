//
//  Testmenu.cpp
//  Week 6 iLab
//
//  Created by David Thomsen on 2/22/15.
//  Copyright (c) 2015 David Thomsen. All rights reserved.
//
#include "MenuBuilder.h"


TestMenu::TestMenu(void)//default constructor for test menu
{
}

//overloaded constructor for test menu that will in return initialize bank and user accoutn information in the menu builder class
TestMenu::TestMenu(string accountName, string accountnumber, string bankname,string bankphone,string bankaddress,string bankcity,string bankstate, int bankzip):_objMenuBuilder(accountName, accountnumber, bankname, bankphone, bankaddress, bankcity, bankstate, bankzip)
{
    
}

// main function that will show menu and take input from the user
void TestMenu::OperateMenu()
{
    string input = "";
    while(1) //continue to show input to the user until 7 digit is pressed
    {
        //main menu
        cout<<"\n\n*****************MAIN MENU*********************\n";
        cout<<"Please select an option:\n";
        cout<<"1. Check balance \n";
        cout<<"2. Make withdrawal\n";
        cout<<"3. Make deposit\n";
        cout<<"4. View account information\n";
        cout<<"5. View statement\n";
        cout<<"6. View bank information\n";
        cout<<"7. Exit\n";
        cout<<"\n************************************************\n\n";
        
        cout<<"Enter an option: ";
        cin>>input; //taking menu option from the user
        cout<<"\n";
        
        if(input == "1")
        {
            _objMenuBuilder.CheckBalance(); //function to display total balance in the account
        }
        else if(input == "2")
        {
            _objMenuBuilder.MakeWithdrawl();//function that is used to withdraw money from account
        }
        else if(input == "3")
        {
            _objMenuBuilder.MakeDeposit();//function that is used to deposit money into the account
        }
        else if(input == "4")
        {
            _objMenuBuilder.ViewAccountInformation();//function that is used to display account information
        }
        else if(input == "5")
        {
            _objMenuBuilder.ViewStatement();//function that is used to display bank statement
        }
        else if(input == "6")
        {
            _objMenuBuilder.ViewBankInformation();// function that is used to display bank information
        }
        else if(input == "7")//pressing 7 will exit the loop
        {
            break;
        }
        else//in case if invalid input is entered
        {
            cout<<"Invalid input!!! Please try again\n";
        }
        
    }
    
    cout<<"Press any key to continue..."<<endl;
    getchar(); //wait until user press a key
}