//
//  main.cpp
//  4. Mins into hours and mins
//
//  Created by Manav Chawla on 7/22/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.

// Program to convert the given minutes into hours and minutes.

#include <iostream>
using namespace std;

int main ()
{
    int min;
    
    cout << "Enter the time in minutes : ";
    cin >> min;
    
    cout << "The given time in minutes and hours is : " << min/60 << " hours and " << min%60 << " minutes." << endl;
    
    return 0;
}