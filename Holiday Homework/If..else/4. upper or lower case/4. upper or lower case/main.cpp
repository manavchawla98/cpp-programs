//
//  main.cpp
//  4. upper or lower case
//
//  Created by Manav Chawla on 9/5/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//


#include <iostream>
using namespace std;

int main ()
{
    
    char x;
    cout << "Enter your letter : ";
    cin >> x;
    
    if (int(x)>=65 && int(x)<=90)
        cout << "Upper case." << endl;
    else if (int(x)>=97 && int(x)<=122)
        cout << "Lower case." << endl;
    else
        cout << "wrong input." << endl;
    return 0;
}
