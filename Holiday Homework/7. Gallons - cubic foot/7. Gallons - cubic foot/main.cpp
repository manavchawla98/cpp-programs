//
//  main.cpp
//  7. Gallons - cubic foot
//
//  Created by Manav Chawla on 7/22/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.

// Program to convert gallons to cubic feet

#include <iostream>
using namespace std;

int main()
{
    float gallon;
    
    cout << "Enter the volume in gallons : ";
    cin >> gallon;
    
    cout << "The volume in cubic feet is : " << gallon/7.481 << " cubic feet. " << endl;
    
    return 0;
}

