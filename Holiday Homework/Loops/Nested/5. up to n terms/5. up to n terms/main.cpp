//
//  main.cpp
//  5. up to n terms
//
//  Created by Manav Chawla on 8/14/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;

int main ()
{
    int n;
    
    cout << "Enter the range : ";
    cin >> n;
    
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

}