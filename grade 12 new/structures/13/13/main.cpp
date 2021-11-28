//
//  main.cpp
//  13
//
//  Created by Manav Chawla on 4/22/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include<iostream>
using namespace std;
struct point
{
    int x;
    int y;
}p1,p2,p3;
int main()
{
    cout<<"Enter the coordinates of the first point : "<<endl;
    cin>>p1.x>>p1.y;
    cout<<"Enter the coordinates of the second point : "<<endl;
    cin>>p2.x>>p2.y;
    p3.x=p1.x+p2.x;
    p3.y=p1.y+p2.y;
    cout<<"The point p3=p1+p2 is "<<p3.x<<" "<<p3.y<<endl;
}
