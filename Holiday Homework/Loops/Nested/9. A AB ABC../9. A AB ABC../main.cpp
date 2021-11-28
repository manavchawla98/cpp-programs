//
//  main.cpp
//  9. A AB ABC..
//
//  Created by Manav Chawla on 8/14/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;

int main ()
{
    for (char a='A'; a<='E'; a++)
    {
        for (char j='A'; j<=a; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}