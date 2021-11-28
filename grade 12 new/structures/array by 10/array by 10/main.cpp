//
//  main.cpp
//  array by 10
//
//  Created by Manav Chawla on 4/22/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//
/*Write a user defined function in C++ to display those elements of a two dimensional array M[5][5] which are divisible by 10. Assume the content of the array is already present and the function prototype is as follows: -
void display10 (int M [5][5])*/

#include <iostream>

using namespace std;

void display (int[5][5]);

int main()
{
    int m[5][5]{1,2,10,3,5,6,20,80,85,91,11,15,25,65,75,89,100,1110,60,30,50,220,2210,240,251};
    display(m);
    return 0;
}

void display(int m[5][5])
{
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            if ((m[i][j]%10)==0)
            {
                cout << m[i][j] << " ";
            }
                
        }
    }
}