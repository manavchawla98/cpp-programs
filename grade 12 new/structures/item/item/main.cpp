//
//  main.cpp
//  item
//
//  Created by Manav Chawla on 4/21/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

struct item
{
    int itemno,qty;
    char name[20];
    float price;
}s[5];


struct customer
{
    int itemno[3],invoice,qty[50];
    char itemname[20];
    
}c1;
int qty;

void initialize()
{
    s[0].itemno=111;
    strcpy(s[0].name,"Deodrant");
    s[0].qty=20;
    s[0].price=13.65;
    
    s[1].itemno=112;
    strcpy(s[1].name,"Juice");
    s[1].qty=30;
    s[1].price=2.95;
    
    s[2].itemno=113;
    strcpy(s[2].name,"chips");
    s[2].qty=20;
    s[2].price=0.50;
    
    s[3].itemno=114;
    strcpy(s[3].name,"Chocolate");
    s[3].qty=20;
    s[3].price=1.52;
    
}

void display (int j)
{
    cout << "Item no : " << j << endl;
    cout << "Item name : " << s[j].name << endl;
    cout << "Quantity : " << qty << endl;
    cout << "Price : " << s[j].qty << endl;
    
    
}

void select()
{
    int x;
    for (int i=0; i<=3; i++)
    {
        for(int j=0;j<=3;j++)
        {
            if (c1.itemno[i]==s[j].itemno)
            {
                x=j;
                display(x);
                break;
            }
            
            
        }
    
    }

}

int main ()
{
    int x;
    initialize();
    
    cout << "How many items do you have? ";
    cin >> x;
    
    for (int i=0; i<x;i++)
    {
        cout << "Enter item no : ";
        cin >> c1.itemno[i];
        cout << "Enter quantity : ";
        cin>>c1.qty[i];
        qty=c1.qty[i];
        
    }
    
    select();
    
    
    
}