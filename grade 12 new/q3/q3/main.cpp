//
//  main.cpp
//  q3
//
//  Created by Manav Chawla on 3/28/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include <iostream>
#include<string.h>
using namespace std;

struct country
{
    char name[50];
    char cap[50];
    float income;
};

country c[5]={"India", "Delhi",500,"Sri Lanka", "Colombo", 600,"Australia", "Canberra", 1000, "UAE", "Abu Dhabi", 400,"Saudi Arabia", "Riyadh",750};


void capital();
void country();
void income();

int main ()
{
    char x;
    while(1)
    {
    cout << "What information about the country do you have with you? " << endl;
    cout << "a- Capital " << endl << "2-Country" << endl << "3-Income" << endl << "4-Exit" << endl;
    cout << "Enter : ";
    cin >> x;
    switch(x)
    {
        case 'a' :
            capital();
            break;
        case 2 :
            country();
            break;
        case 3 :
            income();
            break;
        case 4 :
            exit(0);
        default :
            cout << "Wrong input" << endl;
            break;
    }
    }
    
}


void capital ()
{
    char cap[50];
    int x=0;
    cin.ignore();
    cout << "Enter the capital of the country : ";
    cin.getline(cap,50);
    for (int i=0; i<5; i++)
    {
        if (strcmp(cap,c[i].cap)==0)
        {
            cout << "Name : ";
            cout.write(c[i].name,50);
            cout << endl;
            cout << "Income : " << c[i].income << " M USD" << endl;
            x++;
            break;
        }
        
    }
    if (x==0)
        cout << "Wrong input. " << endl << endl;
        
}

void country ()
{
    char name[50];
    int x=0;
    cin.ignore();
    cout << "Enter the name of the country : ";
    cin.getline(name,50);
    for (int i=0; i<5; i++)
    {
        if (strcmp(name,c[i].name)==0)
        {
            cout << "Captal : ";
            cout.write(c[i].cap,50);
            cout << endl;
            cout << "Income : " << c[i].income << " M USD" << endl;
            x++;
            break;
            
        }
        
    }
    if (x==0)
        cout << "Wrong input. " << endl << endl;
    

}

void income()
{
    float income;
    int x=0;
    cout << "Enter the income of the country : ";
    cin >> income;
    for (int i=0; i<5; i++)
    {
        if (c[i].income==income)
        {
            cout << "Name : ";
            cout.write(c[i].name,50);
            cout << endl;
            cout << "Captal : ";
            cout.write(c[i].cap,50);
            cout << endl << endl;
            x++;
            break;
        }
        
    }
    if (x==0)
        cout << "Wrong input. " << endl << endl;

}



