//
//  main.cpp
//  7. 1 4 7 10 13 16 n
//
//  Created by Manav Chawla on 9/5/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//


#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout << "Enter the range : ";
    cin >> n;
    
    for (int i=1; i<=n; i=i+3)
    {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}

