//
//  main.cpp
//  3. square if even
//
//  Created by Manav Chawla on 9/5/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.


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
        cout << "Square is " << x*x << endl;
    else
        cout << "Cube is " << x*x*x << endl;
    
    return 0;
}
