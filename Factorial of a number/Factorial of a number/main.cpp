//
//  main.cpp
//  Factorial of a number
//
//  Created by Manav Chawla on 6/16/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

//Program to find the factorial of a number

#include <iostream>
using namespace std;
int main ()

{
    int x,i,fact=1;

    cout << "Enter a number : ";
    cin >> x;
    
    for (i=1; i <= x; i++)
    {
        fact = fact * i;
    }
    cout << "the factorial is : " << fact << endl;
    return 0;
    
}