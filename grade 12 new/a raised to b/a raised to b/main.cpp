//
//  main.cpp
//  a raised to b
//
//  Created by Manav Chawla on 4/21/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include <iostream>
#include "math.h"

using namespace std;

class atob
{
    float a,c;
    int b;
    
    public :
    atob()
    {
        a=22.2;
        b=3;
        c=pow(a,b);
        show();
    }
    
    void show()
    {
        cout << "Result is : " << c;
    }
};

int main()
{
    class atob a1;
    return 0;
}