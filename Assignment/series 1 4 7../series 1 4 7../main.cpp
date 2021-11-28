//
//  main.cpp
//  series 1 4 7..
//
//  Created by Manav Chawla on 6/17/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int i,n;
    cout << "Enter the range for the series : ";
    cin >> n;
    
    for (i=1; i<=n; i+=3)
        cout << i <<endl;
    
    return 0;
}