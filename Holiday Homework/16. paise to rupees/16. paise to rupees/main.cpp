//
//  main.cpp
//  16. paise to rupees
//
//  Created by Manav Chawla on 8/14/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.

// Program to accept amount in paise and convert it to its equivalent rupees and paise.

#include <iostream>
using namespace std;

int main ()
{
    int p,paise, rupees;
    
    cout << "Enter the amount in paise : ";
    cin >> p;
    
    rupees = p/100;
    paise = p%100;
    
    cout << "The equivalent is : " << rupees << " rupees and " << paise << " paise." << endl;
    
    return 0;
    
}
