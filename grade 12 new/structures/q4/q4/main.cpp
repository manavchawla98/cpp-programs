//
//  main.cpp
//  q4
//
//  Created by Manav Chawla on 4/22/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include <iostream>
#include<string.h>
using namespace std;

char check[20];

struct tape
{
    char title[20], date[15];
    float len, cost, price;
} t[3];

void take_data()
{
    for(int i=0; i<3; i++)
    {
        cout<<"\n Movie "<<i+1<<":\n\n";
        cout<<" Enter the name of the movie: ";
        cin.ignore();
        cin.getline(t[i].title,20);
        
        cout<<" Enter the date of release: ";
        cin.ignore();
        cin.getline(t[i].date,15);
        
        cout<<" Enter the cost of the tape: ";
        cin>>t[i].cost;
        
        cout<<" Enter the rental price of the tape: ";
        cin>>t[i].price;
        
        cout<<" Enter the length of the tape (mins): ";
        cin>>t[i].len;
        
    }
    
}

void out_data()
{
    cin.ignore();
    cout<<"\n Enter the name of the movie to be rented: ";
    cin.getline(check,20);
    
    for(int i=0;  i<3; i++)
    {
        if (strcmp(t[i].title,check) == 0)
        {
            cout<<"\n Rented Movie Details- \n";
            
            cout<<" Date of release: "<<t[i].date<<endl;
            cout<<" Cost of the tape: "<<t[i].cost<<endl;
            cout<<" Price of the tape: "<<t[i].price<<endl;
            cout<<" Length of the tape (mins): "<<t[i].len<<endl;
        }
    }
}

int main()
{
    cout<<"\n Enter the details of five movies- "<<endl;
    take_data();
    out_data();
    
   	
    return 0;
}