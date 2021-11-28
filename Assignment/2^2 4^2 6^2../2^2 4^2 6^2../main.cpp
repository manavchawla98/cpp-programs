//
//  main.cpp
//  2^2 4^2 6^2..
//
//  Created by Manav Chawla on 6/17/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int n,a,sum=0;
    cout << "Enter the range of the series : ";
    cin >> n;
    
    for (int i=0; i<=n; i=i+2)
    {
        a=i*i;
        sum = sum+a;
    }
    cout << sum << endl;
    
    return 0;
    
}