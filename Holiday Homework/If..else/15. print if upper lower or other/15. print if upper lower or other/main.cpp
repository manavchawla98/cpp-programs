//
//  main.cpp
//  15. print if upper lower or other
//
//  Created by Manav Chawla on 9/5/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//


#include <iostream>
using namespace std;

int main()
{
    int x;
    char a;
    cout << "Enter a character : ";
    cin >> a;
    
    x= int(a);
    
    if ((x>=0 && x<48) || (x>57 && x<65) || (x>90 && x<97) || (x>122 && x<=225))
        cout << "special character." << endl;
    
    else if (x>=48 && x<=57)
        cout << "digit." << endl;
    
    else if (x>=65 && x<=90)
        cout << "Upper case letter."  << endl;
    
    else if (x>=97 && x<=122)
        cout << "Lower case letter." << endl;
    else
        cout << "Wrong input."  << endl;
    
    return 0;
}

