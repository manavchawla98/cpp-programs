//
//  main.cpp
//  6. Area and vol of sphere
//
//  Created by Manav Chawla on 7/22/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.

// Program to calculate the area and volume of a sphere.

#include <iostream>
using namespace std;

int main ()
{
    float r,vol,area;
    const float pi=3.14;
    
    cout << "Enter the radius of the sphere : ";
    cin >> r;
    
    area = 4*pi*r*r;
    vol = (4*pi*r*r*r)/3;
    
    cout << "The area of the sphere is : " << area << " sq.units. and its volume is : " << vol << " cubic units." << endl;
    
    return 0;
}