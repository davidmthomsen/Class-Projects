//
//  Lab6.cpp
//  Week 6 iLab
//
//  Created by David Thomsen on 2/22/15.
//  Copyright (c) 2015 David Thomsen. All rights reserved.
//

#include "MenuBuilder.h"
// #include "Lab6.h"
#include<string>


int main()
{
    // storing bank information and user account details and passing it to the menu builder class
    string bankname = "Devry Bank, established 2011";
    string bankphone = "(123) 456-7890";
    string bankaddress = "12345 1st ST";
    string bankcity = "Someplace";
    string bankstate = "NJ";
    string accountname = "FirstName LastName";
    string accountnumber = "1234554321";
    int bankzip =  12345;
    
    //passing bank information and user account details to the menu builder class
    TestMenu objTestMenu(accountname, accountnumber, bankname, bankphone, bankaddress, bankcity, bankstate, bankzip);
    objTestMenu.OperateMenu(); // main function that will show menu and take input from the user
}
