//
//  main.cpp
//  7. leap year
//
//  Created by Manav Chawla on 9/5/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//


#include <iostream>
using namespace std;

int main ()
{
    int x;
    cout << "Enter a four digit number : ";
    cin >> x;
    
    if (x%4==0)
        cout << "Yes, leap year." << endl;
    else
        cout << "No, not a leap year." << endl;
    
    return 0;
}
