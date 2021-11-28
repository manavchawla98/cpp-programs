//
//  main.cpp
//  Prime numbers till 100
//
//  Created by Manav Chawla on 6/17/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;

int main ()
{
    int i=2,x=0;
    while (i<10)
    {
        while (x<10)
        {
            if(i%x!=0)
            {
                cout << x << " ";
            }
            x++;
            
        }
        i++;
    }
}
