//
//  main.cpp
//  complex
//
//  Created by Manav Chawla on 4/22/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include<iostream>
#include<stdlib.h>

using namespace std;

struct complex
{
    float real;
    float imag;
};

void add(complex a,complex b,complex &c)
{
    c.real=a.real+b.real;
    c.imag=a.imag+b.imag;
}
void sub(complex a,complex b,complex&c)
{
    c.real=a.real-b.real;
    c.imag=a.imag-b.imag;
}
void mult(complex a,complex b,complex&c)
{
    c.real=a.real*b.real-a.imag-b.imag;
    c.imag=a.real*b.imag+a.imag*b.real;
}
void divide(complex a,complex b,complex&c)
{
    c.real=(a.real*b.real+a.imag-b.imag)/(b.real*b.real+b.imag*b.imag);
    c.imag=(a.real*b.imag-a.imag*b.real)/(b.real*b.real+b.imag*b.imag);
}
int main()
{   complex a,b,c;
    cout<<"enter the complex no. 1 a+ib (a,b)"<<endl;
    cin>>a.real>>a.imag;
    cout<<"enter the complex no. 1 a+ib (a,b)"<<endl;
    cin>>b.real>>b.imag;
    cout<<"the results are"<<endl;
    add(a,b,c);
    cout<<c.real<<" "<<c.imag<<endl;;
    sub(a,b,c);
    cout<<c.real<<" "<<c.imag<<endl;;
    mult(a,b,c);
    cout<<c.real<<" "<<c.imag<<endl;;
    divide(a,b,c);
    cout<<c.real<<" "<<c.imag<<endl;;
    
    return 0;
}

