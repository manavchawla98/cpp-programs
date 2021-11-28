//
//  main.cpp
//  2. even or odd
//
//  Created by Manav Chawla on 9/5/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;

int main ()
{
    int x;
    cout << "Enter your number : ";
    cin >> x;
    
    if (x==0)
        cout << "it is neither even nor odd." << endl;
    else if (x%2==0)
        cout << "it is even." << endl;
    else
        cout << "it is odd."  << endl;
    
    return 0;
}
