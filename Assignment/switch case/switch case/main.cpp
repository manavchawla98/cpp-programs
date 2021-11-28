//
//  main.cpp
//  switch case
//
//  Created by Manav Chawla on 6/17/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int a,b,x;
    
    cout << "Enter two numbers : ";
    cin >> a >> b;
    
    cout << "What do you want to do? Enter 1 for addition, 2 for subtraction, 3 for multiplication and 4 for division." << endl;
    cin >> x;
    
    switch (x)
    {
case 1 :
            cout << "Answer is : " << a+b << endl;
        break;
    
case 2 :
            cout << "Answer is : " << a-b << endl;
            break;
            
case 3 :
            cout << "Answer is : " << a*b << endl;
            break;
            
case 4 :
            cout <<"Answer is : " << a/b << endl;
            break;
            
default :
            cout << "Invalid number." << endl;
    }
    
    
    return 0;
}