//
//  MenuBuilder.h
//  Week 6 iLab
//
//  Created by David Thomsen on 2/22/15.
//  Copyright (c) 2015 David Thomsen. All rights reserved.
//

#pragma once

#include<iostream>
using namespace std;
#include<stdio.h>
#include<string>
#include<iomanip>
#include<cctype>

class Lab6
{
public:
    Lab6(void);
};


class Transactions
{
public:
    Transactions(void);//default constructor for test menu
    Transactions(time_t transactiondate, string transactionlocation, double transactionamount, string transactiontype);//overloaded constructor that will initialize transaction related information
    time_t GetDate(); //Getter function for transaction date
    string GetLocation(); //Getter function for location
    double GetAmount(); //Getter function for amount that is deposited or withdrawn
    string GetType(); //Getter function to get transaction type (withdraw/deposit)
private:
    time_t _transactiondate;
    string _transactionlocation;
    double _transactionamount;
    string _transactiontype;
};

class MenuBuilder
{
public:
    MenuBuilder(void);//Default menu builder constructor
    //overloaded menubuilder constructor that will initialize bank info and user accounts information
    MenuBuilder(string accountName, string accountnumber, string bankname,string bankphone,string bankaddress,string bankcity,string bankstate, int bankzip);
    void CheckBalance(); //function to display total balance in the account
    void MakeWithdrawl();//function that is used to withdraw money from account
    void MakeDeposit();//function that is used to deposit money into the account
    void ViewAccountInformation();//function that is used to display account information
    void ViewStatement();//function that is used to display bank statement
    void ViewBankInformation();// function that is used to display bank information
    void CreateTransaction(time_t transactiondate, string transactionlocation, double transactionamount, string transactiontype);// function that is used to create transaction for bank statements.
    
private:
    double _balance;
    string _accountName;
    string _accountnumber;
    string _bankname;
    string _bankphone;
    string _bankaddress;
    string _bankcity;
    string _bankstate;
    int _bankzip;
    int  _transactioncount;
    Transactions _objTransaction[9999];
};

class TestMenu
{
public:
    TestMenu(void);//default constructor for test menu
    void OperateMenu();
    
    //overloaded constructor for test menu that will in return initialize bank and user accoutn information in the menu builder class
    TestMenu(string accountName, string accountnumber, string bankname,string bankphone,string bankaddress,string bankcity,string bankstate, int bankzip);
private:
    MenuBuilder _objMenuBuilder;
    
};


