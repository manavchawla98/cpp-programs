//
//  main.cpp
//  Upper Case-Lower case
//
//  Created by Manav Chawla on 6/18/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

//Program to convert upper case to lower case and vice versa.

#include <iostream>
using namespace std;

int main()
{
    char a,b;
    int x;
    cout << "Enter 1 for Upper Case to Lower Case and 2 for Lower Case to Upper Case : ";
    cin >> x;
    switch (x)
    {
        case 1 :cout << "Enter the letter : ";
            cin >> a;
            b = a+32;
            cout << b << endl;
            break;
            
        case 2 : cout << "Enter the letter : ";
            cin >> a;
            b = a-32;
            cout << b << endl;
            break;
            
        default : cout << "Wrong code, sorry!\n";
            
        
    }
    return 0;
  
}

