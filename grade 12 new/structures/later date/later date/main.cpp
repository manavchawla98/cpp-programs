//
//  main.cpp
//  later date
//
//  Created by Manav Chawla on 4/22/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include<iostream>
using namespace std;
struct date
{
    int dd;
    int mm;
    int yy;
};
date late(date a, date b)
{
    if(a.yy>b.yy )
    {
        return a;
    }
    else if(a.yy<b.yy )
    {
        return b;
    }
    else if(a.mm<b.mm )
    {
        return b;
    }
    else if(a.mm>b.mm )
    {
        return a;
    }
    else if(a.dd<b.dd )
    {
        return b;
    }
    else if(a.dd>b.dd )
    {
        return b;
    }
    else
    {
        cout<<"same"<<endl;
        return a;
    }
}
int main( )
{  date k1,k2,later;
    
    cout<<"enter date 1 ";
    cin>>k1.dd>>k1.mm>>k1.yy;
    cout<<"enter date 2 ";
    cin>>k2.dd>>k2.mm>>k2.yy;
    later=late(k1,k2);
    cout<<later.dd<<" "<<later.mm<<" "<<later.yy;
}
