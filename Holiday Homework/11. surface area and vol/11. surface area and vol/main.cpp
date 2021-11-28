//
//  main.cpp
//  11. surface area and vol
//
//  Created by Manav Chawla on 8/14/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;

int main ()
{
    long double r,a,pi,vol;
    pi = 3.14;
    cout << "Enter the radius of the sphere : ";
    cin >> r;
    
    a = 4 * pi * r * r;
    vol = (4*pi*r*r*r)/3;
    
    cout << "The area of the sphere is : " << a << " units sq. and its volume is : " << vol << " cubic units." << endl;
    
    return 0;
}