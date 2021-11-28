//
//  main.cpp
//  factor using constructor
//
//  Created by Manav Chawla on 4/19/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;


class factorial
{
    int fact,x;
    
    public :
    
    void facto();
    void read();
    factorial()
    {
        fact=1;
    }
};

void factorial::facto()
{
    
    for (int i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    
    cout << "Factorial : " << fact << endl;
    cout << "You have done it." << endl;
    
    
}

void factorial::read()
{
    cout << "Enter the number : ";
    cin>> x;
    facto();
}

int main ()
{
    class factorial ob;
    ob.read();
    return 0;
}

