//
//  main.cpp
//  Number of days youve lived
//
//  Created by Manav Chawla on 4/23/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

// program to tell you the number of days youve lived, APPROX.

#include <iostream>
using namespace std;
int main ()

{
    int years, months, days;
    
    cout << "Enter your age (in years, obv) : ";
    cin >> years;
    cout << "Enter the number of months since your last birthday : ";
    cin >> months;
    
    days = (years*365) + (months*30);

cout << "You have lived for approximately " << days << " days. Congrats!!" << "\n";





    return 0;
}

