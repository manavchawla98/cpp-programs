//
//  main.cpp
//  testers and bloopers
//
//  Created by Manav Chawla on 8/11/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include<iostream>
#include<fstream>

using namespace std;


class user
{
    char username[20];
    char password[10];
    public :
    void getuser();
    void putuser();
};

void user::getuser()
{
    cout << "User : ";
    cin.getline(username,20);

    cout << "Pass : ";
    cin.getline(password,20);
    
}

void user::putuser()
{
    cout << "Username : " << username << endl << "pass : " << password << endl;
}

int main()
{
    user u1,u2;
    ofstream file;
    file.open("ExistingUsers.dat", ios::binary|ios::out|ios::app);
    for(int i=0; i<2; i++)
    {
    u1.getuser();
        file.write((char*)&u1, sizeof(u1));
    }
    file.close();
    
    ifstream fin;
    fin.open("ExistingUsers.dat", ios::binary|ios::in);
    for(int i=0; i<2; i++)
    {
        fin.read((char*)&u2, sizeof(u2));
        u2.putuser();
    }
    
    
}