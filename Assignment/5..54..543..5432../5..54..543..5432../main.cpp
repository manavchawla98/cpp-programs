//
//  main.cpp
//  5..54..543..5432..
//
//  Created by Manav Chawla on 6/17/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    for (int i=5; i>=1; i--)
    {
        for (int j=5; j>=i; j-- )
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}