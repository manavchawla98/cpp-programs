//
//  main.cpp
//  Linked Lists
//
//  Created by Manav Chawla on 2/7/16.
//  Copyright © 2016 Manav Chawla. All rights reserved.
//

#include<iostream>

using namespace std;

struct node
{
    int info;
    node* next;
} *ptr, *newptr, *temp, *start;

node* createnewnode(int);
void insertbeg();
void display(node*);


int main()
{
    int inf;
    start=NULL;
    
    for(int i=1; i<=5; i++)
    {cout << "Enter new info for the new node: ";
    cin >> inf;
    
    newptr=createnewnode(inf);
    
    insertbeg();
    
    display(start);
    }
    
    delete ptr;
    delete start;
    delete newptr;
    delete temp;
}

node* createnewnode(int a)
{
    ptr= new node;
    ptr->info=a;
    ptr->next=NULL;
    return ptr;
}

void insertbeg()
{
    if(start==NULL)
    {
        start=newptr;
    }
    else
    {
        temp=start;
        start=newptr;
        newptr->next=temp;
    }
}

void display(node* np)
{
    while(np!=NULL)
    {
        cout << np->info << "--->";
        np=np->next;
    }
}