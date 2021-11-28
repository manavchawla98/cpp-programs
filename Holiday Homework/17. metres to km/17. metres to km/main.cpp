//
//  main.cpp
//  17. metres to km
//
//  Created by Manav Chawla on 8/14/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.

// Program to accept the length in metres and convert it to its equivalent kilometres and metres.

#include <iostream>
using namespace std;

int main ()
{
    int l,m,km;
    
    cout << "Enter the length in metres : ";
    cin >> l;
    
    km = l/1000;
    m = l%1000;
    
    cout << "The equivalent is : " << km << " kilometre(s) and " << m << " metre(s)." << endl;
    
    return 0;
}

