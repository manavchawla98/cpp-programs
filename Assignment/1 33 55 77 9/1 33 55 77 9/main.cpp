//
//  main.cpp
//  1 33 55 77 9
//
//  Created by Manav Chawla on 6/17/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;

int main ()
{
    for (int i=1; i<=9; i=i+2)
    {
        for (int j=1; j<=i; j=j+2)
        {
           cout << i << " ";
        }
        cout << endl;
    }
    
    return 0;
}