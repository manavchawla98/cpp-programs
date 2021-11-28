//
//  main.cpp
//  9. rectangle
//
//  Created by Manav Chawla on 9/5/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//


#include <iostream>
using namespace std;

int main ()
{
    int l,b,a,p;
    cout << "Enter the length and breadth of the rectangle : ";
    cin >> l >> b;
    
    a = l*b;
    p = 2*(l+b);
    
    if (a>p)
        cout << "Area is greater than perimeter." << endl;
    else
        cout << "Perimeter is greater than area" << endl;
    
    return 0;
}
