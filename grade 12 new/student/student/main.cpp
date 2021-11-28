//
//  main.cpp
//  student
//
//  Created by Manav Chawla on 4/18/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include <iostream>

using namespace std;



class student
{
    char name[20];
    int roll;
    float marks[5];
    
    public :
    void stream();
    void read();
    
        
    
}stud1;

void student::read()
{
    cout << "Enter name : ";
    cin.getline(name,20);
    cout << "enter roll no : ";
    cin>>roll;
    cout << "Enter marks : ";
    for (int i=0; i<5;i++)
    {
        cin>>marks[i];
        
    }
    
    stream();
}

void student::stream()
{
    float avg=0;
    for (int i=0;i<5;i++)
    {
        avg=avg+marks[i];
    }
    
    avg=avg/5;
    
    if (avg>=96)
    {
        cout << "comp science";
    }
    else if (avg>=91 && avg<=95)
    {
     cout << "Electronics : ";
        
    }
    
    else if (avg>=86 && avg<=90)
        cout << "mechanical ";
    else if (avg>=81 && avg<=85)
        cout << "electrical ";
    else if(avg>=76 && avg<=80)
        cout << "chemical ";
    else if (avg>=71 && avg<=75)
        cout << "civil ";
    else
        cout << "N/A";
}


int main ()
{
    
    stud1.read();
    
}

