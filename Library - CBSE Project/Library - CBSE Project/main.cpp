//
//  main.cpp
//  Library - CBSE Project
//
//  Created by Manav Chawla on 8/11/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include <iostream>
#include "declarations.h"
#include "fstream"
#include <ctype.h>

using namespace std;


int main()
{
    intro();
    
}

void intro()
{
    int x;
    cout << "             ************************************************   " << endl;
    cout << "                   Welcome to Dubai Public Library          " << endl;
    cout << "             ************************************************   " << endl << endl << endl;
    cout << "What do you want to do?                             " << endl << "1. Login" << endl << "2. Sign up" << endl << "3. Exit" << endl << ">> ";
    cin >> x;
    switch(x)
    {
        case 1 :
            login();
            break;
        case 2 :
            signup();
            cout << "Press Enter to log in..";
            login();
            break;
        case 3 :
            exit(0);
            
         

    }

}

void login()
{
    int x,y;
    
    x=u1.checkusername();
    if(x==1)
        y=u1.checkpassword();
    if(y==1)
        userhasloggedin();

    
    

    
    
    
}

int users::checkusername()
{
    int found;
    
    
    cin.ignore();

    cout << "Enter your username : ";
        cin.getline(username, 20);
    ifstream file;
    file.open("ExistingUsers.dat",ios::binary|ios::in);
    file.seekg(0);
    while(!(file.eof()))
          {
              file.read((char*)&u2, sizeof(u2));
              if(strcmp(u2.username,username)==0)
              {
                  found=1;
                  cout << "Username found!! ";
                  
                  
                  break;
                  
              }
              
          }
    
    if (found!=1)
    {
        cout << "Username not found! ";
        
    }
    file.close();
    if (found==1)
        return 1;
    else
        return 0;
}

int users::checkpassword()
{
    while(1)
    {
    int found;
    cout << "Enter your password : ";
    
    cin.getline(password,10);
     if(strcmp(u2.username,username)==0)
     {
    if(strcmp(u2.password,password)==0)
        found=1;

   
         
    }
    
    if (found==1)
    {
        break;
        
    }
    else
    {
        cout << "Wrong password. Re-enter." << endl  << ">>";
    }
   }
    return 1;
    }


void userhasloggedin()
{
    int x;
    cout << endl << endl;
    cout << "Welcome "  << endl << "Choose your option : " << endl << "1. Rent a book \n2. Preview a book \n>> ";
    cin >> x;
    switch (x) {
        case 1 :
            rent();
            break;
        case 2 :
            preview();
            break;
    }
    
}

void signup()
{
    users newuser;
    newuser.getuser();
    ofstream file;
    file.open("ExistingUsers.dat", ios::binary|ios::app|ios::out);
    file.write((char*)&newuser, sizeof(newuser));
    file.close();
}

void users::getuser()
{
    cin.ignore();
    cout << endl << endl;
    cout << "Enter your new username : ";
    cin.getline(username, 20);
    cout << "Enter your new password : ";
    cin.getline(password,10);
    
}


void rent()
{
    int x,a,b,c;
    cout << "Choose : (Search book by)\n1. Name\n2. Author\n3. Genre\n>>";
    cin>>x;
    switch (x) {
        case 1:
            a=b1.checkname();
            break;
        case 2 :
            b=b1.checkauthor();
            break;
        case 3 :
            c=b1.checkauthor();
            break;
        default :
            cout << "Wront input.";
            
    }

}

int book::checkname()
{
    int found;
    char name[100];
    cout << "Enter the name of the book you are looking for : ";
    cin.getline(name, 100);
    
    fstream file;
    file.open("Books.dat", ios::binary|ios::in|ios::out);
    while(!(file.eof()))
    {
        file.read((char*)&b1,sizeof(b1));
        tolower(bname[99]);
        tolower(name[99]);
        if(strcmp(name,bname)==0)
        {
            found=1;
            break;
        }
    }
    
    if(found==1)
    {
        displaybook();
        return 1;
    }
    else
    {
        cout << "Book not found";
        return 0;
        
    }
}

void book::displaybook()
{
    cout << "Book Name : ";
    puts(bname);
    cout << endl;
    cout << "Author : ";
    puts(author);
    cout << endl;
    cout << "Genre : ";
    puts(genre);
    cout << endl;
    cout << "Description : ";
    puts(bdescription);
    cout << endl;
    
}
