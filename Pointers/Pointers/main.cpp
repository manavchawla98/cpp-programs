//
//  main.cpp
//  Pointers
//
//  Created by Manav Chawla on 10/24/15.
//  Copyright © 2015 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;


int main()
{
    int *a = new int[2*3];
    for(int i=0; i<2; i++)
    {
        cout << "row " << i+1 << endl;
        for(int j=0; j<3; j++)
        {
            cin >> a[i*3+j];
        }
    }
    for(int i=0; i<2; i++)
    {
        
        for(int j=0; j<3; j++)
        {
            cout << a[i*3+j];
        }
        cout << endl;
    }
    delete [] a;
}