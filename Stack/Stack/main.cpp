//
//  main.cpp
//  Stack
//
//  Created by Manav Chawla on 2/7/16.
//  Copyright © 2016 Manav Chawla. All rights reserved.
//

#include <iostream>

using namespace std;

void push(int[], int&, int);
void display(int[], int);


int main()
{
    int item;
    int stack[10], top=-1, res;
    for(int i=0; i<5; i++)
    {
        cout << "Enter new item : ";
        cin>>item;
        push(stack, top, item);
        display(stack, top);
        
    }
}


void push(int stack[], int &top, int item)
{
    if(top==9)
        cout << "Overflow";
    else
    {
        top++;
        stack[top]=item;
    }
}

void display(int stack[], int top)
{
    cout << stack[top] << "<---" << endl;
    for(int i=top-1; i>=0; i--)
    {
        cout << stack[i] << endl;
    }
}