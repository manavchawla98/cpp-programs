//
//  main.cpp
//  Salesmen
//
//  Created by Manav Chawla on 4/19/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;

class salesman
{
    int id;
float target,salestilldate,commission;
    public :
    
    void read();
    void comm();
    void show();
};

void salesman::read()
{
    cout << "Enter id number : ";
        cin>>id;
    cout << "Enter target : ";
    cin>>target;
    cout << "Enter sales till date : ";
    cin>>salestilldate;
    
    comm();

    
}

void salesman::comm()
{
    if(salestilldate>target)
        commission= ((salestilldate-target)*0.25) + (target*0.10);
    else if(salestilldate==target)
        commission= (target*0.10);
    else commission=0;
    
    
}

void salesman::show()
{
    cout << endl;
    cout << "ID : " << id << endl;
    cout << "Target : " << target << endl;
    cout << "Sales till date : " << salestilldate << endl;
    if (commission>0)
    {
        cout << "Congrats! You commission is : " << commission << endl;
    }
    else
        cout << "Sorry! You get no commission." << endl;
    
}


int main ()
{
    int x;
    class salesman s[20];
    cout << "How many records do you want to enter? ";
    cin >> x;
    
    for(int i=0; i<x;i++)
        s[i].read();
    for (int i=0; i<x;i++)
        s[i].show();
    
    
    return 0;
}