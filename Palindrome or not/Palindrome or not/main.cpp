//
//  main.cpp
//  Palindrome or not
//
//  Created by Manav Chawla on 7/12/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

#include<iostream>
#include "math.h"
using namespace std;
int main()
{
    int x,y,z=0,n;
    cout << "Enter a number : ";
    cin >> n;
    
    x=n;
    while (x>0)
    {
        y=x%10;
        z = z*10 + y;
        
        x=x/10;
    }
    if (z==n)
        cout << "Yes it is a palindrome " << endl;
    else
        cout << "No it is not a palindrome " << endl;
    
}

