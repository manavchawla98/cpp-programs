//
//  main.cpp
//  factors of a given number
//
//  Created by Manav Chawla on 6/17/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int x,i;
    cout << "Enter a number : ";
    cin >> x;
    cout << "The factors are : ";
    for (i=1; i<=x; i++)
    {
        if (x%i==0)
        {
            cout << i << " ";
   
        }
            }
    cout << endl;
    
    return 0;
    }