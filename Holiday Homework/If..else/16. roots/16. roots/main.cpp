//
//  main.cpp
//  16. roots
//
//  Created by Manav Chawla on 9/5/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//


#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    
    double a, b, c, x1, x2, d, rd;
    cout << "From the form, ax^2+bx+c, enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    cout << "Enter c : ";
    cin >> c;
    if (a==0)
    {
        cout << "Could not solve due to a=0." << endl;
    }
    else
    {
        d = (b*b) - 4*a*c;
        rd=pow(d,0.5);
        x1 = (-b - rd)/ (2*a);
        x2 = (-b + rd) / (2*a);
        if (d>0) {
            cout << "Roots are real and unequal!!!\n" << endl;
            cout << "The roots are : "<< x1 << " and " << x2 << endl;
        }
        else if (d==0){
            cout << "Roots are equal!!!\n" << endl;
            cout << "The root is : "<< x1 << endl;
        }
        else
            cout << "Roots are complex." << endl;
        
    }
    
    return 0;
}

