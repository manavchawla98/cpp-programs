//
//  main.cpp
//  12. two numbers and operator
//
//  Created by Manav Chawla on 9/5/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//


#include <iostream>
using namespace std;

int main ()
{
    int x,y;
    char a;
    
    cout << "Enter two numbers : ";
    cin >> x >> y;
    cout << "Enter an operator (+,-,*,/) : ";
    cin >> a;
    
    if (a=='+')
        cout << x << "+"  << y << " = " << x+y << endl;
    else if (a=='-')
        cout << x << "-" << y << " = " << x-y << endl;
    else if (a=='*')
        cout << x << "*" << y << " = " << x*y << endl;
    else if (a=='/')
        cout << x << "/" << y << " = " << x/y << endl;
    
    else
        cout << "Wrong input." << endl;
    
    
    
    return 0;
}
