//
//  main.cpp
//  8. 5 54 543
//
//  Created by Manav Chawla on 8/14/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;

int main ()
{
    for (int i=5; i>=1; i--)
    {
        for (int j=5; j>=i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}