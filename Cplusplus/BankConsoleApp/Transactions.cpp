//
//  Transactions.cpp
//  Week 6 iLab
//
//  Created by David Thomsen on 2/22/15.
//  Copyright (c) 2015 David Thomsen. All rights reserved.
//
#include<iostream>
#include "MenuBuilder.h"

//default constructor for test menu
Transactions::Transactions(void)
{
}

//overloaded constructor that will initialize transaction related information
Transactions::Transactions(time_t transactiondate, string transactionlocation, double transactionamount, string transactiontype)
{
    _transactiondate = transactiondate;
    _transactionlocation = transactionlocation;
    _transactionamount = transactionamount;
    _transactiontype = transactiontype;
}
//Getter function for transaction date
time_t Transactions::GetDate()
{
    return _transactiondate;
}

//Getter function for location
string Transactions::GetLocation()
{
    return _transactionlocation;
}

//Getter function for amount that is deposited or withdrawn
double Transactions::GetAmount()
{
    return _transactionamount;
}

//Getter function to get transaction type (withdraw/deposit)
string Transactions::GetType()
{
    return _transactiontype;
}