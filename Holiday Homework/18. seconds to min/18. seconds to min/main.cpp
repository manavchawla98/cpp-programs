//
//  main.cpp
//  18. seconds to min
//
//  Created by Manav Chawla on 8/14/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.

// Program to accept the time in seconds and convert it to hours, mins, and seconds.

#include <iostream>
using namespace std;

int main ()
{
    int t,s,h,m;
    
    cout << "Enter the time in seconds : ";
    cin >> t;
    
    h= t/3600;
    m= (t%3600)/60;
    s= (t%3600)%60;
    
    cout << "The equivalent is : " << h << " hours, " << m << " minutes and " << s << " seconds." << endl;
    
    return 0;
}
