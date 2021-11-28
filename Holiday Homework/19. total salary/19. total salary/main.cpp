//
//  main.cpp
//  19. total salary
//
//  Created by Manav Chawla on 8/14/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.

// Program to accept the total salary and display a message accordingly.

#include <iostream>
using namespace std;

int main ()
{
    int salary;
    
    cout << "Enter your total salary : ";
    cin >> salary;
    
    if (salary > 50000)
        cout << "high income group." << endl;
    else if (salary<=50000 && salary > 35000)
        cout << "Middle income group." << endl;
    else if (salary <= 35000)
        cout << "Low income group." << endl;
    else
        cout << "wrong input";
    
    return 0;
    
}