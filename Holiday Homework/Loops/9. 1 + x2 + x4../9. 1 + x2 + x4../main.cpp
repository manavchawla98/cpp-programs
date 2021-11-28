//
//  main.cpp
//  9. 1 + x2 + x4..
//
//  Created by Manav Chawla on 9/5/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    float x,n,sum=1.0,j;
    cout << "Enter a value : ";
    cin >> x;
    cout << "Enter the range for the series : ";
    cin >> n;
    
    for (int i=2; i<=n; i=i+2)
    {
        j=pow(x,i);
        sum = sum+j;
        
    }
    cout << "The sum is : " << sum << endl;
        
    return 0;
}
