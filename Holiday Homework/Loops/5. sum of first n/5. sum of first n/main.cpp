//
//  main.cpp
//  5. sum of first n
//
//  Created by Manav Chawla on 9/3/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int n,i,sum=0;
    cout << "Enter the range : ";
    cin >> n;
    
    
    for (i=1;i<=n; i++)
    {
        sum = sum+i;
    }
    
    cout << sum << endl;
    return 0;
    
}