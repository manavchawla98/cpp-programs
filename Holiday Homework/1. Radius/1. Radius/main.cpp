//
//  main.cpp
//  1. Radius
//
//  Created by Manav Chawla on 7/22/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.

// Program to accept radius of a circle and determine its diameter, area and perimeter.

#include <iostream>

using namespace std;
int main ()
{
    float r,area,p,d;
    const float pi = 3.14;
    
    cout << "Enter the radius of the circle : ";
    cin >> r;
    
    d=2*r;
    cout << "The diameter of the circle is : " << d << " units." << endl;
    
    area=pi*r*r;
    cout << "The area of the circle is : " << area << " sq. units." << endl;
    
    p=2*pi*r;
    cout << "The perimeter of the circle is : " << p << " units." << endl;
    
    return 0;
    
}