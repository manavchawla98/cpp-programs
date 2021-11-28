//
//  main.cpp
//  Armstrong Numbers
//
//  Created by Manav Chawla on 7/12/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//


#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    int x,a,b,c,d;
    cout << "Enter a number : ";
    cin >> x;
    
    a = (x%10);
    b = ((x%100)- a )/10;
    c = (x - (x%100))/100;
    d= pow(a,3)+ pow(b,3) + pow(c,3);
    if (d==x)
        cout << "yes";
    else
        cout << "no";
    
    
}