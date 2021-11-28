//
//  main.cpp
//  Calculator
//
//  Created by Manav Chawla on 8/4/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;

int main ()
{
    long double a,b;
    int x;
    
    cout << "Enter two numbers : ";
    cin >> a >> b;
    
    cout << "What operation do you want to perform? Enter 1 for addition, 2 for subtraction, 3 for multiplication, and 4 for division : ";
    
    cin >> x;
    
    switch (x)
    {

case 1 :
    cout << "Your answer is : " << a+b << endl;
    break;
    
case 2 :
    cout << "Your answer is : " << a-b << endl;
    break;
    
case 3:
    cout << "Your answer is : " << a*b << endl;
    break;
    
case 4 :
    cout << "Your answer is : " << a/b << endl;
    break;
    
default :
    cout << "Wrong input." << endl;
    }
    return 0;
    

}