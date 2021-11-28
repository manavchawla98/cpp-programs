//
//  main.cpp
//  employee
//
//  Created by Manav Chawla on 4/22/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include <iostream>
#include <stdio.h>

using namespace std;
struct parks
{
    float da,hra,net;
};

struct employee
{
    char name[20], address[100], phone[20];
    float salary;
    parks sal;
}emp[10];

void read(int);
void salary(int);
void show(int);

int main ()
{
    int x;
    
    cout << "How many records do you want to enter? ";
    cin >> x;
    
    read(x);
    
    return 0;
    
}

void read(int x)
{
    
    for(int i=0; i<x;i++)
    {
    cout << "Enter name : ";
    cin.ignore();
    cin.getline(emp[i].name,20);
    cout << "Enter Address : ";
    cin.getline(emp[i].address, 100);
    cout << "Phone number : ";
    cin.getline(emp[i].phone,20);
    cout << "Enter salary : ";
    cin >> emp[i].salary;
        
    }
    
    salary(x);
}


void salary(int x)
{
    for(int i=0; i<x;i++)
    {
        emp[i].sal.da=0.20*emp[i].salary;
        emp[i].sal.hra=0.25*emp[i].salary;
        emp[i].sal.net=emp[i].sal.da+emp[i].salary+emp[i].sal.hra;
    }
    
    show(x);
    
}


void show(int x)
{
    for(int i=0; i<x;i++)
    {
        cout << endl;
        cout << "Name : ";
        puts(emp[i].name);
        cout << "Address : ";
        puts(emp[i].address);
        cout << "Phone number : ";
        puts(emp[i].phone);
        cout << "Net salary : " << emp[i].sal.net << endl;
    }
    
}
    