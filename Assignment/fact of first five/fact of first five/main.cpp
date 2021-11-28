//
//  main.cpp
//  fact of first five
//
//  Created by Manav Chawla on 6/22/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

//To print the factorial of first five natural numbers.
#include <iostream>
using namespace std ;
int main()
{
    int i,j,fact=1 ;
    
    for (i=1;i<=5;i++)
    {
        for(j=1; j<=1; j++)
        fact = fact*i;
        
        cout << "The Factorial of "<< i << " is " << fact << endl;
    }
    cout << endl;
    
}