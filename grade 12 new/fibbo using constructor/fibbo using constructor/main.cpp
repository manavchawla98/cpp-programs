//
//  main.cpp
//  fibbo using constructor
//
//  Created by Manav Chawla on 4/21/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include <iostream>

using namespace std;

class fib
{
    int a,b,c;
    
    public :
    fib()
    {
        a=1;
        b=1;
        c=0;
    }
    
    void series();
};

void fib::series()
{
    int x;
    c=a+b;
    cout << "Enter the range of the series (Not more than 20) : ";
    cin >> x;
    cout << a << " " << b << " " << c << " ";
    int i =0;
    
    while (i<x-3)
    {
        a=b;
        b=c;
        c=a+b;
        
        cout << c << " ";
        i++;
    }
    
    
    
}

int main ()
{
    class fib ob1;
    ob1.series();
    return 0;
}