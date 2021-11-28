//
//  main.cpp
//  COUNTRY
//
//  Created by Manav Chawla on 4/21/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

struct country
{
    char name[20],capital[20];
    float income;
    
}c[4];

void name();
void cap();
void income();

void initialize()
{
    strcpy(c[0].name,"UAE");
    strcpy(c[0].capital,"Abu Dhabi");
    c[0].income=999.89;
    
    strcpy(c[1].name,"India ");
    strcpy(c[1].capital,"New Delhi");
    c[1].income=800.99;

    
    strcpy(c[2].name,"USA");
    strcpy(c[2].capital,"Washington DC");
    c[2].income=500.56;

    
    strcpy(c[3].name,"Australia");
    strcpy(c[3].capital,"Canberra");
    c[3].income=200.91;

    
    
}


int main()
{
    int x;
    initialize();
    while (1)
    {
    cout << "Enter 1 for name, 2 for capital,3 for income, 4 to exit : ";
    cin >> x;
        
    switch(x)
    {
        case 1 :
            name();
            break;
        case 2 :
            cap();
            break;
        case 3 :
            income();
            break;
        case 4 :
            exit(0);
        default :
            cout << "Wrong input";
            
            
    }
    }
}



void name()
{
    cin.ignore();
    char name[20];
    cout << "Enter name : ";
    cin.getline(name,20);
    
    for (int i=0; i<=3; i++)
    {
        if (strcmp(c[i].name,name)==0)
        {
            cout << "Name : " << name << endl;
            cout << "Capital : " << c[i].capital << endl;
            cout << "Income : " << c[i].income << endl;
        }
    }
}


void cap()
{
    cin.ignore();
    char cap[20];
    cout << "Enter capital : ";
    cin.getline(cap,20);
    
    for (int i=0; i<=3; i++)
    {
        if (strcmp(c[i].capital,cap)==0)
        {
            cout << "Name : " << c[i].name << endl;
            cout << "Capital : " << c[i].capital << endl;
            cout << "Income : " << c[i].income << endl;
        }
    }

}

void income()
{
    float income;
    cout << "Enter income : ";
    cin>>income;
    
    for (int i=0; i<=3; i++)
    {
        if (c[i].income==income)
        {
            cout << "Name : " << c[i].name << endl;
            cout << "Capital : " << c[i].capital << endl;
            cout << "Income : " << c[i].income << endl;
        }
    }

}