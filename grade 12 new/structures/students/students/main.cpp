//
//  main.cpp
//  students
//
//  Created by Manav Chawla on 4/22/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;


struct date
{
    int day,year;
    char month[10];
};

struct student
{
    date dob;
    int roll;
    char sec[5],grade;
    float per;
    
    
}s[10];

void read(int);
void show(int);

int main ()
{
    int x;
    cout << "How many records ? ";
    cin >> x;
    read(x);
    

}


void read(int x)
{
    for (int i=0; i<x; i++)
    {
        cout << "Enter the roll no : ";
        cin >> s[i].roll;
        cout << "Enter the class : ";
        cin.ignore();
        cin.getline(s[i].sec,5);
        cout << "Enter the date of birth (only date): ";
        cin >> s[i].dob.day;
        cout << "Enter the month of birth : ";
        cin.ignore();
        cin.getline(s[i].dob.month,10);
        cout << "Enter the year of birth : ";
        cin >> s[i].dob.year;
        cout << "Enter the total percentage : ";
        cin >> s[i].per;
        cout << "Enter the grade : ";
        cin.ignore();
        s[i].grade=getchar();
        
        }
    show(x);
}

void show(int x)
{
    for (int i=0; i<x; i++)
    {
        cout << endl;
        cout << "Record " << i+1 << endl;
        cout << "Roll no : " << s[i].roll << endl;
        cout << "Class : ";
        puts(s[i].sec);
        cout << "DOB : ";
        cout << s[i].dob.day << " " << s[i].dob.month << " " << s[i].dob.year << endl;
        cout << "Total percentage : " << s[i].per << endl;
        cout << "Grade : " << s[i].grade << endl;
        
        
    }
}