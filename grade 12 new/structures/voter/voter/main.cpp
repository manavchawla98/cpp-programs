//
//  main.cpp
//  voter
//
//  Created by Manav Chawla on 4/22/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include<iostream>
using namespace std;

struct workers
{
    int idno;
    char name[20];
    int age;
    
}work[3];
void disp()
{
    for(int i=0;i<3;i++)
    {
        if(work[i].age>=60)
        {
            cout<<"id no of voter "<<work[i].idno<<endl;
            cout<<"name of voter "<<work[i].name<<endl;
            cout<<"age of voter "<<work[i].age<<endl;
        }
    }
}
int main( )
{
    cout<<"enter voter data"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"enter id no of voter ";
        cin>>work[i].idno;
        cout<<"enter name of voter ";
        cin.ignore();
        cin.getline(work[i].name,20);
        cout<<"enter age of voter ";
        cin>>work[i].age;
    }
    disp();
}


