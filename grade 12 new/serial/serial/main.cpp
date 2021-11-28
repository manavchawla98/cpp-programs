//
//  main.cpp
//  serial
//
//  Created by Manav Chawla on 4/17/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


class serial
{
    int serialcode,noofepisodes;
    float duration;
    char title[20];
    
    public :
    serial()
    {
        
        duration=30;
        noofepisodes=10;
    }
    void newserial();
    void otherentries(float,int);
    void dispdata();
    
};

void serial::newserial()
{
    float dur;
    int noof;
    cout << "Enter the title : ";
    cin.getline(title,20);
    
    cout << "Enter the serial code : ";
    cin>>serialcode;
    
    cout << "Enter the duration : ";
    cin>>dur;
    cout << "Enter the no of episodes : ";
    cin>>noof;
    
    otherentries(dur, noof);
}

void serial::dispdata()
{
    cout << endl;
    cout << "Title : ";
    cout.write(title,20);
    cout << endl;
    
    cout << "Code : ";
    cout << serialcode << endl;
    cout << "duration : " << duration << endl;
    cout << "no of episodes : " << noofepisodes << endl << endl;
    
}

void serial::otherentries(float dur, int noof)
{
    duration=dur;
    noofepisodes=noof;
    dispdata();
    
}
int main ()
{
    class serial ob1, ob2;
    ob2.newserial();
    ob1.dispdata();
    
    return 0;
}

