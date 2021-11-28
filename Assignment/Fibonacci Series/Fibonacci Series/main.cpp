//
//  main.cpp
//  Fibonacci Series
//
//  Created by Manav Chawla on 6/11/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

// Program to print the Fibonacci Series
#include <iostream>
using namespace std;
int main ()
{
    int a=1,b=1,c,i=0,n;
    
    cout << "enter n : ";
    cin >> n;
    c= a+b;
    cout << a << " " << b << " " << c << " ";
    while (i<n-3)
    {
        a=b;
        b=c;
        c=a+b;
        cout << c << " ";
        i++;
    }
    
    return 0;
}

    
    
    