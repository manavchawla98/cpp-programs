//
//  main.cpp
//  9. To display if number is negative
//
//  Created by Manav Chawla on 7/22/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.

// Program to check whether a number is negative or positive.

#include <iostream>
using namespace std;

int main ()
{
    int x;
    
    cout << "Enter a number : ";
    cin >> x;
    
    (x<0) ? cout << "Negative." << endl : cout << "Positive." << endl;
    
    return 0;
    
}

