//
//  main.cpp
//  sum of 1 3 5 7
//
//  Created by Manav Chawla on 6/17/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout << "Enter the range of the series : ";
    cin >> n;
    
    for (int i=1; i<=n; i+=2)
    {
        sum=sum+i;
    }
    cout << sum << endl;
    
    return 0;
}