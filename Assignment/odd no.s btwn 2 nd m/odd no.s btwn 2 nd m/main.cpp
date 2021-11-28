//
//  main.cpp
//  odd no.s btwn 2 nd m
//
//  Created by Manav Chawla on 6/22/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

//To print the sum of the odd numbers between 2 and m.

#include <iostream>
using namespace std;

int main()
{
    int m,i,sum=0;
    cout << "Enter the range : ";
    cin >> m;
    
    for (i=3; i<=m; i+=2)
    {
        sum=sum+i;
    }
    cout << "The sum is : " << sum << endl;
    
    return 0;
}