//
//  main.cpp
//  class
//
//  Created by Manav Chawla on 3/29/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;

class item
{
    int code[5];
    float price[5];
    
    public :
    void input();
    void sum();
    void largest();
    
};

item a;

 void item::input()
{
    for (int i=0; i<5; i++)
    {
    cout << "Item " << i+1 << " : " << endl;
    cout << "Enter the item number : ";
    cin >> code[i];
    cout << "Enter its price : ";
    cin >> price[i];
    }
}

void item::largest()
{
    int x;
    float max;
    max=price[0];
    for (int i=0; i<5; i++)
    {
        if (max<price[i])
        {
            max=price[i];
            x=code[i];
            break;
        }
    }
    
    cout << "Most Expensive Item's Price : " << max << " AED" << endl;
    cout << "Item number : " << x << endl;
    
}

void item::sum()
{
    float sum=0;
    for (int i=0; i<5; i++)
    {
        sum=sum+price[i];
        
    }
    
    cout << "The sum of all prices : "  << sum << " AED" << endl;
}

int main ()
{
    a.input();
    
    int x;
    cout << "Enter 1 to find the largest of the prices, or 2 to find the sum of all prices : ";
    cin >> x;
    
    switch(x)
    {
        case 1 :
            a.largest();
            break;
        case 2 :
            a.sum();
            break;
        default :
            cout << "Wrong output.";
            break;
            
    }
}