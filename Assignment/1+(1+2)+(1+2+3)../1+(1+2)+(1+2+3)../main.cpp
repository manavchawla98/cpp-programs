//
//  main.cpp
//  1+(1+2)+(1+2+3)..
//
//  Created by Manav Chawla on 6/17/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

//To find sum of following series (up to n terms):- 1+(1+2)+(1+2+3)..........

#include <iostream>
using namespace std;

int main()

{
    int n,sum=0,i=1;
    cout << "Enter the range : ";
    cin >> n;
    
    for (i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
        sum= sum+j;
        }
    }
    cout << "The sum of the series is : "<< sum << endl;
    
    return 0;
}
