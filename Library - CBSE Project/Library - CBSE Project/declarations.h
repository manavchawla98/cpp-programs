//
//  declarations.h
//  Library - CBSE Project
//
//  Created by Manav Chawla on 8/13/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#ifndef Library___CBSE_Project_declarations_h
#define Library___CBSE_Project_declarations_h

// ******* ALL THE FUNCTION PROTOTYPES

void intro();
void login();
void intro();
void signup();
void userhasloggedin();
void rent();
void preview();
void searchbyname();
void searchbyauthor();
void searchbygenre();


// ******************************************************************************



// ********* ALL CLASS DEFINITIONS
class users
{
    char username[20], password[10], bookname[20];
    
    public :
    void getuser();
    void readuser();
    int checkusername();
    int checkpassword();
};


class book
{
    char bname[100];
    char bdescription[500];
    char author[50];
    char genre[30];
    int qty;
    public :
    int checkname();
    int checkauthor();
    int checkgenre();
    void displaybook();
    
};

// *****************************************************************************

// ****** GLOBAL VARIABLES AND OBJECTS

users u1,u2;
book b1,b2;

// ********************************************************************************

#endif
