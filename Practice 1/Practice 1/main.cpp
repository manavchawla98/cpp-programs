//
//  main.cpp
//  Practice 1
//
//  Created by Manav Chawla on 2/7/16.
//  Copyright © 2016 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;
#include <ctype.h>

int main()
{
    int a;
    int ret;
  
    doagain :
    
    cout << "Enter : ";
    ret=scanf("%d", &a);
    cin.ignore();
    
    if(ret!=1)
    {
        cout << "bad number ";
        goto doagain;
    }
    
    
        
    
    
}