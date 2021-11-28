//
//  main.cpp
//  4. reverse even bw 100 and n
//
//  Created by Manav Chawla on 9/3/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.

// Program to print the even numbers reverse from 100 to n.

#include <iostream>
using namespace std;

int main ()
{
    int i=100,n;
    
    cout << "Enter the range : ";
    cin >> n;
    
    while (i>=n)
    {
        if (i%2==0)
            cout << i << endl;
        i--;
    }
    
    return 0;
}