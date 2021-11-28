//
//  main.cpp
//  To check whether a person is major or minor
//
//  Created by Manav Chawla on 5/11/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age : ";
    cin >> age;
    if (age<18)
    { cout << "You are a minor, and are not allowed to vote." << endl;
    }
    
    else if (age>=18)
    { cout << "You are a major, you can go ahead and vote." << endl;
    }
    return 0;
}
