//
//  main.cpp
//  class q6
//
//  Created by Manav Chawla on 4/22/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include<iostream>
using namespace std;

class calculator
{
    int ans, f, s;
    char symbol;
    
public:
    void cal();
    void last();
};

calculator c1;

void calculator::cal()
{
    cout<<" Enter first number- ";
    cin>>f;
    
    cout<<" Enter second number- ";
    cin>>s;
    
    cout<<" Enter '+' to add the two numbers, '-' to subtract them, '*' to multipy them or '/' to divide them- ";
repeat1:
    cin>>symbol;
    
    switch(symbol)
    {
        case '+':	ans = f + s;
            cout<<" The sum of the two number is "<<ans<<".\n\n";
            break;
            
        case '-':	ans = f - s;
            cout<<" The answer is "<<ans<<".\n\n";
            break;
            
        case '*':	ans = f * s;
            cout<<" The product of the two number is "<<ans<<".\n\n";
            break;
            
        case '/':	if (s == 0)
        {
            cout<<" The operation is incorrect. \n\n";
            break;
        }
            
            ans = f / s;
            
            cout<<" The quotient of the two number is "<<ans<<".\n\n";
            break;
            
        default: 	cout<<" The entered selection is not available. Please re-enter the selection- ";
            goto repeat1;
    }
}

void calculator::last()
{
    cout<<" The last result calculated was "<<ans<<".\n\n";
}

int main()
{
    int sel=0;
    
repeat2:
    cout<<"\n 1. Calculator \n 2. Last Result Calculated \n 3. Exit \n\n";
    cout<<" Please enter the numbers 1-3 to select the corresponding options- ";
repeat:
    cin>>sel;
    
    if (sel == 1)
    {
        c1.cal();
        goto repeat2;
    }
    
    else if (sel == 2)
    {	
        c1.last();
        goto repeat2;
    }
    
    else if (sel == 3)
        ;
    
    else 
    {
        cout<<"The given selection does not exist. Please re-enter the number- ";
        goto repeat;
    }
    
    
    return 0;
}
