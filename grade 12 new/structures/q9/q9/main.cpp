//
//  main.cpp
//  q9
//
//  Created by Manav Chawla on 4/22/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include<iostream>

using namespace std;

struct box
{
    char marker[2];
    float height=1, width=2, length=3, volume=0;
};

void passbyval(box b2)
{
    cout<<"\n Marker- "<<b2.marker<<endl<<" Height- "<<b2.height<<endl<<" Width- "<<b2.width<<endl<<" Length- "<<b2.length<<endl<<" Volume- "<<b2.volume<<endl;
}

void passbyref(box &b3)
{
    b3.volume = b3.height * b3.length * b3.width;
    cout<<"\n Marker- "<<b3.marker<<endl<<" Height- "<<b3.height<<endl<<" Width- "<<b3.width<<endl<<" Length- "<<b3.length<<endl<<" Volume- "<<b3.volume<<endl;
}


int main()
{
    box b1;
    
    cout<<"\n Value- ";
    passbyval(b1);
    
    cout<<"\n Reference- ";
    passbyref(b1);
    
    cout<<"\n Main- ";
    cout<<"\n Marker- "<<b1.marker<<endl<<" Height- "<<b1.height<<endl<<" Width- "<<b1.width<<endl<<" Length- "<<b1.length<<endl<<" Volume- "<<b1.volume<<endl;
    
    
    
    return 0;
}