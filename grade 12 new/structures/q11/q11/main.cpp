//
//  main.cpp
//  q11
//
//  Created by Manav Chawla on 4/22/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//
#include<iostream>
using namespace std;
struct student
{
    int rollno;
    char name[20];
    int marks;
};
void sort(student s[10],int &a)
{
    for(int i=0;i<a;i++)
    {
        for(int j=i+1;j<a;j++)
        {
            if((s[i].marks) < (s[j].marks))
            {
                student temp;
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
            else
            {
            }
        }
    }
}

int main( )
{
    student k[10];
    cout<<"enter no of student data"<<endl;
    int x;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cout<<"enter roll no of student ";
        cin>>k[i].rollno;
        cout<<"enter name of student ";
        cin>>k[i].name;
        cout<<"enter marks of student ";
        cin>>k[i].marks;
    }
    sort(k,x);
    for(int i=0;i<x;i++)
    {
        cout<<"marks of student "<<k[i].rollno<<" is "<<k[i].marks<<endl;;
    }
}