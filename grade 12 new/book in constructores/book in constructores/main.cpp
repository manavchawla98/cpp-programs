//
//  main.cpp
//  book in constructores
//
//  Created by Manav Chawla on 4/21/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class book
{
    char bookname[20];
    int pages;
    
    public :
    book()
    {
        strcpy(bookname,"Matilda");
        
        pages=0;
    }
    
    book(char name[], int page)
    {
        strcpy(bookname,name);
        pages=page;
        
    }
    
    void display()
    {
        cout << "Book name : " << bookname << endl;
        
        cout << "Pages : " << pages;
        cout << endl << endl;
    }
};

int main()
{
    class book ob1;
    class book ob2("Percy Jackson",200);
    ob1.display();
    ob2.display();
    return 0;
    
}