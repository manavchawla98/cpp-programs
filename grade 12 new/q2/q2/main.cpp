//
//  main.cpp
//  q2
//
//  Created by Manav Chawla on 3/28/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;

int outputdata(int);

struct iteminfo
{
    int itemno;
    char name[50];
    float price;
    int qty;
}a[100];

struct customer{
    iteminfo c;
    
}c1;

int main ()
{
    int x;
    cout << "How many items do you have? ";
    cin >> x;
    
    for (int i=0; i<x; i++)
    {
    cout << "Info for item " << i+1 << endl;
    cout << "What is the item no.?";
    cin >> a[i].itemno;
    
    cout << "Enter the name of the item : ";
    cin.ignore();
    cin.getline(a[i].name, 50);
    
    cout << "Enter the price of the of the item : ";
    cin>>a[i].price;
    
    cout << "Enter the quantity : ";
    cin >> a[i].qty;
    cout << endl;
    }
    
    outputdata(x);
    
}

int outputdata(int x)
{
    float total=0;
    cout << "Summary/Bill : ";
    cout << endl << endl;
    for (int i=0; i<x; i++)
    {
    cout << "Item " << i+1 << endl;
    cout << "Item No. : " << a[i].itemno << endl;
    cout << "Item name : ";
    cout.write(a[i].name,50);
    cout << endl;
    cout << "Price : " << a[i].price << endl;
    cout << "Quantity : " << a[i].qty << endl;
    cout << "Total price : " << a[i].price * a[i].qty << endl << endl;
    total=total + a[i].price * a[i].qty;
    }
    
    cout << "Grand Total : " << total << endl;
    
    return 0;
}