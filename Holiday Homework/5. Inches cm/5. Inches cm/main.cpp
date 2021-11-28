//
//  main.cpp
//  5. Inches cm
//
//  Created by Manav Chawla on 7/22/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.

// Program to convert the given length in inches to centimetre.

#include <iostream>
using namespace std;

int main ()
{
    float inches;
    
    cout << "Enter the length in inches : ";
    cin >> inches;
    
    cout << "The length in centimetres is : " << inches*2.54 << " cm." << endl;
    
    return 0;
}

