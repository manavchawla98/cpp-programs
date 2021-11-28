//
//  main.cpp
//  2. Area of triangle
//
//  Created by Manav Chawla on 7/22/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.

// Program to find the area of the triangle.

#include <iostream>
using namespace std;

int main()
{
    int l,b,area;
    
    cout << "Enter the length of the perpendicular of the triangle : ";
    cin >> l;
    
    cout << "Enter the base of the triangle : ";
    cin >> b;
    
    area= (l*b)/2;
    
    cout << "The area of the triangle is : " << area  << " sq.units." << endl;
    
    return 0;
    
}