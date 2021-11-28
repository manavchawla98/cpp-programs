//
//  main.cpp
//  customer
//
//  Created by Manav Chawla on 4/22/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include<iostream>

using namespace std;

struct customers
{
    char name[20], type;
    int acc_no;
    float balance, deposit, withdraw;
}c[10];

void take_data()
{
    for (int i=0; i<10; i++)
    {
        cout<<"\n Customer "<<i+1<<"- \n\n";
        cout<<" Enter the name of the customer: ";
        cin.ignore();
        cin.getline(c[i].name,20);
        
        cout<<" Enter the type of account (S - Savings or C - Current): ";
        cin>>c[i].type;
        
        c[i].type = toupper(c[i].type);
        
        cout<<" Enter the balance in the account: ";
        cin>>c[i].balance;
        
        cout<<" Enter the account number: ";
        cin>>c[i].acc_no;
    }
}

void deposit()
{
    int n=0; // n is for account no
    
    cout<<" Enter the account number: ";
    cin>>n;
    
    for (int i=0; i<10; i++)
    {
        if (n == c[i].acc_no)
        {
            cout<<" Enter the amount to be deposited: ";
            cin>>c[i].deposit;
            
            c[i].balance = c[i].balance + c[i].deposit;
        }
    }
}

void withdraw()
{
    int n=0; // n is for account no
    
    cout<<" Enter the account number: ";
    cin>>n;
    
    for (int i=0; i<10; i++)
    {
        if (n == c[i].acc_no)
        {
            if(c[i].balance >= 500)
            {
                cout<<" Balance in account: "<<c[i].balance<<endl;
                cout<<" Enter the amount to withdraw: ";
                cin>>c[i].withdraw;
                
                c[i].balance = c[i].balance - c[i].withdraw;
            }
            
            else
            {
                cout<<" The account "<<c[i].acc_no<<" contains less than 500 dirhams. Withdrawal has been denied.\n\n";
            }
        }
    }
}

void display_info()
{
    int n; // n is for account no
    
    cout<<" Enter the account number to view info: ";
    cin>>n;
    
    for (int i=0; i<10; i++)
    {
        if (n == c[i].acc_no)
        {
            cout<<"\n Name: "<<c[i].name<<endl<<" Account number: "<<c[i].acc_no<<endl<<" Type of Account: "<<c[i].type<<endl<<" Balance: "<<c[i].balance<<endl;
        }
    }
}

void display_status()
{
    for (int i=0; i<10; i++)
    {
        cout<<" Customer "<<i+1<<"- \n";
        cout<<" Type of Account: "<<c[i].type;
        cout<<endl<<endl;
    }
}

int main()
{
    int x;
    
    take_data();
    
repeat:
    cout<<"\n Enter '1' to deposit amount, '2' to withdraw amount, '3' to display info, '4' to display status or '5' to exit: ";
    cin>>x;
    
    switch(x)
    {
            
        case 1: deposit();
            break;
            
        case 2: withdraw();
            break;
            
        case 3:	display_info();
            break;
            
        case 4: display_status();
            break;
            
        case 5: exit(0);
    }
    
    goto repeat;	
    

    return 0;
}