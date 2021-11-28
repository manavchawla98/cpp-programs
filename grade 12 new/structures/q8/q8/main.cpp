//
//  main.cpp
//  q8
//
//  Created by Manav Chawla on 4/22/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include<iostream>

using namespace std;

struct distance
{
    float feet, inch;
}d1;

struct time
{
    int hrs, mins, sec;
}t1;

void distfunc()
{
    cout<<"\n Enter the distance (in feet): ";
    cin>>d1.feet;
    
    d1.inch = 12 * d1.feet;
    
    cout<<" The feet equivalent is "<<d1.inch<<" inches.\n\n";
    
    cout<<"\n Enter the distance (in inches): ";
    cin>>d1.inch;
    
    d1.feet = d1.inch / 12;
    
    cout<<" The inch equivalent is "<<d1.feet<<"feet.\n\n";
}

void timefunc()
{
    cout<<"\n Enter the time (in seconds): ";
    cin>>t1.sec;
    
    t1.mins = t1.sec / 60;
    t1.hrs = t1.mins / 60;
    
    cout<<" The time is "<<t1.hrs<<" hours or "<<t1.mins<<" mins.\n\n";
    
    cout<<"\n Enter the time (in mins): ";
    cin>>t1.mins;
    
    t1.sec = t1.mins * 60;
    t1.hrs = t1.mins / 60;
    
    cout<<" The time is "<<t1.hrs<<" hours or "<<t1.sec<<" seconds.\n\n";
    
    cout<<"\n Enter the time (in hours): ";
    cin>>t1.hrs;
    
    t1.mins = t1.hrs * 60;
    t1.sec = t1.mins * 60;
    
    cout<<" The time is "<<t1.mins<<" mins or "<<t1.sec<<" seconds.\n\n";
}

int main()
{	
    distfunc();
    timefunc();
    
    
    return 0;
}