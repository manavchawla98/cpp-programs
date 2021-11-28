//
//  main.cpp
//  GCD
//
//  Created by Manav Chawla on 6/22/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

//To print the GCD of two numbers.

#include <iostream>
using namespace std;

int main()
{
   int  x,y,i,hcf,j,lcm;
    cout << "Enter two : ";
    cin >> x >> y;
    
    for (i=1; i<=x || i<=y; i++)
    {
        if (x%i==0 && y%i==0)
        {
            hcf=i;
        }
    }
    cout << hcf << endl;
    
    j=x*y;
    lcm = j/hcf;
    cout << lcm;
    
    
    return 0;
}
