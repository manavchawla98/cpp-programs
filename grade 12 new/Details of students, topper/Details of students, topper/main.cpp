//
//  main.cpp
//  Details of students, topper
//
//  Created by Manav Chawla on 4/1/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;

class student
{
    char name[50];
    float mark[5];
    int roll;
    public :
    void getdata();
};

student s1[10];

void student::getdata()
{
    int x;
    cout << "How many records?";
    cin >> x;
    for (int i=0; i<x; i++)
    {
        
        cin.ignore();
        
        cout << "Enter name : ";
        cin.getline(s1[i].name,50);
        
    }

}

int main ()
{
    }

