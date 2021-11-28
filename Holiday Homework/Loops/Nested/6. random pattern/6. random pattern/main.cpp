//
//  main.cpp
//  6. random pattern
//
//  Created by Manav Chawla on 8/14/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;

int main ()
{
    for (int i=1; i<=5; i++)
    {
        for (int j=i; j>=1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}