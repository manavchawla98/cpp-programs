//
//  main.cpp
//  Nishant Pandit
//
//  Created by Manav Chawla on 2/7/16.
//  Copyright © 2016 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;

struct Node
{
    int info;
    Node *next;
}*start, *newptr, *rear, *ptr;

Node *Create_New_Node(int n)
{
    ptr = new Node;
    ptr -> info = n;
    ptr -> next = NULL;
    return ptr;
}

void Insert_End(Node *np)
{
    if(start == NULL)
    {
        start = rear = np;
    }

    else
    {
        rear -> next = np;
        rear = np;
    }
}

void DelNode()
{
    if (start == NULL)
    {
        cout<<"UNDERFLOW";
    }
    
    else
    {
        ptr = start;
        start = start -> next;
        delete ptr;
    }
}

void Display(Node *np)
{
    while (np != NULL)
    {
        cout<<np->info<<" ->";
        np = np->next;
    }
    
    cout<<"!!! \n";
}

int main()
{
    start=rear=NULL;
    int inf;
    char ch='y';
    
    while(ch == 'y' || ch == 'Y')
    {
        cout<<"\n Enter for new node: ";
        cin>>inf;
        
        newptr = Create_New_Node(inf);
        
        Insert_End(newptr);
        
        cout<<"\n Press Y to enter more nodes, N to exit: ";
        cin>>ch;
    }
        do
        {
            cout<<"\n The List now is: \n";
            Display(start);
            cout<<" Want to delete more nodes? (Y/N) ";
            cin>>ch;
            
            if(ch == 'y' || ch == 'Y')
            {
                DelNode();
            }
        }while(ch == 'y' || ch == 'Y');
    
    return 0;
}

