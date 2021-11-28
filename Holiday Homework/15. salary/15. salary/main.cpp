//
//  main.cpp
//  15. salary
//
//  Created by Manav Chawla on 8/14/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.

// Program to calculate the salary of a person.

#include <iostream>
using namespace std;

int main()
{
    long double bs,s,d,a;   // bs - basic salary; s - salary; a - allowance; d - deduction
    cout << "Enter the basic salary : ";
    cin >> bs;
    
    a = (12*bs)/100;
    d = (10*bs)/100;
    
    s = bs+a-d;
    
    cout << "The salary of the employee would be : " << s << endl;
    
    return 0;
}