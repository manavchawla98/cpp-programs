//
//  main.cpp
//  12. cube if positive and square if negative
//
//  Created by Manav Chawla on 8/14/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.

// Program to accept a number and display its cube if it is positive or its square if it is negative.

#include <iostream>
using namespace std;

int main ()
{
    int a;
    
    cout << "Enter a number : ";
    cin >> a;
    
    if (a>0)
        cout << a*a*a << endl;
    else
        cout << a*a << endl;
    return 0;
    
}