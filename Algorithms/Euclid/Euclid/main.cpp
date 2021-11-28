//
//  main.cpp
//  Euclid
//
//  Created by Manav Chawla on 3/19/16.
//  Copyright © 2016 Manav Chawla. All rights reserved.
//



#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x,y;
    cout << "Enter two numbers : ";
    cin >> x >> y;
    
    int a;
    
    if(x<y)
    {
        a=y;
        y=x;
        x=a;
    }
    
    while(x!=0)
    {
        if(x>=y)
            x=x-y;
        else
            y=y-x;
        
    }
    
    
    cout << endl << y;
}