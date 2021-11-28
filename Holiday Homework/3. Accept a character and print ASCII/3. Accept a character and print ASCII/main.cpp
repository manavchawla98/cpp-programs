//
//  main.cpp
//  3. Accept a character and print ASCII
//
//  Created by Manav Chawla on 7/22/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.

// Program to accept a character and print its ASCII value

#include <iostream>
using namespace std;

int main ()
{
    char a;
    
    cout << "Enter a character  : ";
    cin >> a;
    
    cout << "The ASCII Value for this character is : " << int (a) << endl;
}