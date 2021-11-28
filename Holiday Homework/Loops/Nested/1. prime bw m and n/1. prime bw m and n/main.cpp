//
//  main.cpp
//  1. prime bw m and n
//
//  Created by Manav Chawla on 8/20/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.

// Program to print the prime numbers between m and n.

#include <iostream>
using namespace std;

int main ()
{
    int m,n;
    
    cout << "Enter the starting value of the range : ";
    cin >> m;
    
    cout << "Enter the ending value of the range : ";
    cin >> n;
    
    for (int i=m; i<=n; i++)
    {
        for (int j=2; j<n; j++)
        {
            if (i%j != 0)
            {
                cout << i;
            }
        }
    }
}