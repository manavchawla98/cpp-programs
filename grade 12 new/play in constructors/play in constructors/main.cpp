//
//  main.cpp
//  play in constructors
//
//  Created by Manav Chawla on 4/21/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

class play
{
    int playcode,noofscenes;
    float duration;
    char playtitle[20];
    
    public :
    play()
    {
        duration=45.00;
        noofscenes=5;
    }
    
    void newplay();
    void moreinfo(int,float);
    void shoplay();
    
};

void play::newplay()
{
    cout << "Enter the playcode : ";
    cin >> playcode;
    cin.ignore();
    cout << "Enter the play title : ";
    cin.getline(playtitle,20);
    
}

void play::moreinfo(int scenes,float dur)
{
    noofscenes=scenes;
    duration=dur;
    shoplay();
    
}

void play::shoplay()
{
    cout << "Play code : " << playcode << endl;
    cout << "Play title : " << playtitle << endl;
    cout << "Play Duration : " << duration << endl;
    cout << "No of scenes : " << noofscenes << endl;
    
}





int main ()
{
    int x,scenes;
    float dur;
    class play play1;
    play1.newplay();
    cout << "Do you want to show the details (hit 1) or add more info (hit 2)? ";
    cin >> x;
    if (x==1)
        play1.shoplay();
    else if(x==2)
    {
        cout << "Enter the no of scenes : ";
        cin >> scenes;
        cout << "Enter the duration : ";
        cin >> dur;
        play1.moreinfo(scenes,dur);
    }
    
    
    return 0;
}