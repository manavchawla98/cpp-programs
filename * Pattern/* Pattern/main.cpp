//
//  main.cpp
//  * Pattern
//
//  Created by Manav Chawla on 7/12/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    for (int i=1; i<=5; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}