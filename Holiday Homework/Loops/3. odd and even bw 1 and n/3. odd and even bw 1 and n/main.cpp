//
//  main.cpp
//  3. odd and even bw 1 and n
//
//  Created by Manav Chawla on 9/3/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.

// Program to print the odd and even numbers between 1 and n.

#include <iostream>
using namespace std;

int main ()
{
    int i=1,n,j=1;
    
    cout << "Enter the range : ";
    cin >> n;
    
    cout << "Even:" << endl;
    while (i<=n)
    {
        if (i%2==0)
            cout << i << endl;
        i++;
    }
    cout << endl;
    
    cout << "Odd:" << endl;
    while (j<=n)
    {
        if (j%2!=0)
            cout << j << endl;
        j++;
    }
    return 0;
    
}