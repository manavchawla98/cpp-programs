//
//  main.cpp
//  3. factorial bw 1 and n
//
//  Created by Manav Chawla on 8/20/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.

// Program to print the factorial of numbers from 1 to n.

#include <iostream>
using namespace std;

int main ()
{
    int fact=1, n;
    
    cout << "Enter the range of the series : ";
    cin >> n;
    
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            fact=fact*j;
        }
        cout << fact << " ";
    }
    return 0;
}