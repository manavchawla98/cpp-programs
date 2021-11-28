//
//  main.cpp
//  10. 3 digits and largest
//
//  Created by Manav Chawla on 7/22/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.

// Program to print largest of three numbers.

#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    
    cout << "Enter three numbers : ";
    cin >> a >> b >> c;
    
    if (a>b && a>c)
        cout << a << " is greatest." << endl;
    else if (b>a && b>c)
        cout << b << " is greatest." << endl;
    else
        cout << c << " is greatest." << endl;
}