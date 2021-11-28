//
//  main.cpp
//  construct 1
//
//  Created by Manav Chawla on 4/22/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include<iostream>
using namespace std;

class trying
{
public:
    int i, j;
    
    trying()
    {
        i = 0;
        j = 0;
        
        cout<<"\n Default Constructor.";
    }
    
    trying(int a, int b)
    {
        i = a;
        j = b;
        
        cout<<"\n Parameterized Constructor.";
    }
    
    trying (trying&t2)
    {
        i = t2.i;
        j = t2.j;
        
        cout<<"\n Copy Constructor.";
    }
    
    ~trying()
    {
        cout<<"\n Destructor.";
    }
};

trying t1, t2(2,3), t3(t2);


int main()
{
    cout<<"\n "<<t3.i<<" and "<<t3.j<<".\n";
    
    
    return 0;
}
