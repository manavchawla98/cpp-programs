//
//  main.cpp
//  14. phy chem math marks
//
//  Created by Manav Chawla on 9/5/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int p,c,m,avg;
    cout << "Enter your physics, chemistry and maths marks : ";
    cin >> p >> c >> m;
    
    avg = (p+c+m)/3;
    
    if (avg>=90)
        cout << "Your grade is A." << endl;
    else if (avg>=81 && avg<90)
        cout << "Your grade is B." << endl;
    else if (avg>=71 && avg<=80)
        cout << "Your grade is C." << endl;
    else if (avg<70)
        cout << "Your grade is D." << endl;
    
    else
        cout << "wrong input" << endl;
    
    return 0;
}