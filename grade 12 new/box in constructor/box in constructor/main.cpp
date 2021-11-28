//
//  main.cpp
//  box in constructor
//
//  Created by Manav Chawla on 4/21/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;

class box
{
    float l,b,h;
    double v;
    
    public :
    
    box(float length, float breadth, float height)
    {
        l=length;
        b=breadth;
        h=height;
        vol();
    }
    void vol();
    
    
};

void box::vol()
{
    v=l*b*h;
    cout << "volume is : " << v << " units cube " << endl;
    
}

int main()
{
    class box b1(20.2,30.5,15.90);
    class box b2(30.22,13.45,16.99);
    
}