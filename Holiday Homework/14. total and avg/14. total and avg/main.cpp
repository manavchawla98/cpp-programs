//
//  main.cpp
//  14. total and avg
//
//  Created by Manav Chawla on 8/14/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.

// Program to accept 3 numbers and display their total and average.

#include <iostream>
using namespace std;

int main ()
{
    int a,b,c;
    
    cout << "Enter three numbers : ";
    cin >> a >> b >> c;
    
    cout << "The total of these three numbers is : " << a+b+c << endl << "Their average is : " << (a+b+c)/3 << endl;
    
    return 0;

    
}