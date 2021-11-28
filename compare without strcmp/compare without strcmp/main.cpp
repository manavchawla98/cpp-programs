//
//  main.cpp
//  compare without strcmp
//
//  Created by Manav Chawla on 3/3/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include <iostream>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
using namespace std;

int main ()
{
    
    int i=0,j=0,val,x=0;
    
    char a[100], b[100], c[300];
    
    
    cin.getline (a, 100);
    cin.getline (b,100);
    
    while ((a[i]!='\0'))
    {
        i++;
    }
    
    while (b[j]!='\0')
        j++;
    
    if (i>j)
    {
        val=1;
        cout << "Unequal!";
    }
    
    else if (i<j)
    {
        val=-1;
        cout << "Unequal!";
    }
    int y=0;
    if (i==j)
    {
        while(a[y]!='\0')
        {
            if (a[y]==b[y])
            {
                x++;
            }
            
            else
            {
                x=0;
                break;
            }
            y++;
        }
        
        
        
        if (x!=0)
        {
            cout << "Equal!" << endl;
        }
        
        else  if (x==0)
        {
            cout << "Unequal!" << endl;
        }
        
    }
}
