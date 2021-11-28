//
//  main.cpp
//  timepass
//
//  Created by Manav Chawla on 5/17/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

#include <math.h>
#include <iostream>
using namespace std;

int main()
{
    int x;
    float r, l,b,h;
    
    cout << "Enter 1 for area of triangle, 2 for area of rectangle and 3 for area of circle : ";
    cin >> x;
    
    switch (x)
    {
        case 1 :
            cout << "Enter the base of the triangle : ";
            cin >> b;
            cout << "Enter the height of the triangle : ";
            cin >> h;
            cout << "The area is : " << 0.5*b*h << " units^2" << endl;
            break;
            
        case 2 :
            cout << "Enter the length of the rectangle : ";
            cin >> l;
            cout << "Enter the breadth of the rectangle : ";
            cin >> b;
            cout << "The area is  : " <<  l*b << " units^2" << endl;
            break;
            
        case 3 :
            cout << "Enter the radius of the circle : ";
            cin >> r;
            cout << "The area is : " << 3.14*r*r << " units^2" << endl;
            break;
            
        default:
            cout << "Invalid code." << endl;
            
            
    }
    
    return 0; 
}

