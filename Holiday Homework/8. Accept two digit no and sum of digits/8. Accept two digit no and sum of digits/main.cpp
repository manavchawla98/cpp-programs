//
//  main.cpp
//  8. Accept two digit no and sum of digits
//
//  Created by Manav Chawla on 7/22/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.

// Program to accept a 2 digit number and print the sum of its digits.

#include <iostream>
using namespace std;

int main()
{
    int x,y,z;
    
    cout << "Enter a 2 digit number : ";
    cin >> x;
    
    y=x%10;
    z=x/10;
    
    cout << "The sum of its digits is : " << y+z << endl;
    
    return 0;
}