//
//  main.cpp
//  1. pos or neg
//
//  Created by Manav Chawla on 9/5/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.

// Program to check if a number is positive or negative.

#include <iostream>
using namespace std;

int main ()
{
    int x;
    cout << "Enter the number : ";
    cin >> x;
    
    if (x>0)
    {
        cout << "It is positive." << endl;
    }
    
    else
    {
        cout << "It is negative." << endl;
    }
    
    return 0;
}

