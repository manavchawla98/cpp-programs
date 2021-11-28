//
//  main.cpp
//  4. 6 marks
//
//  Created by Manav Chawla on 6/11/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;

int main ()
{
    int m1,m2,m3,m4,m5,m6,total,avg;
    cout << "Enter marks in Sub1 : ";
    cin >> m1;
    cout << "Enter marks in Sub2 : ";
    cin >> m2;
    cout << "Enter marks in Sub3 : ";
    cin >> m3;
    cout << "Enter marks in Sub4 : ";
    cin >> m4;
    cout << "Enter marks in Sub5 : ";
    cin >> m5;
    cout << "Enter marks in Sub6 : ";
    cin >> m6;
    
    total = m1+m2+m3+m4+m5+m6;
    avg =total/6;
    
    if (avg >= 80)
    {
        cout << "Your average is " << avg << " marks and you have got an A!Outstanding!!"<< endl;
    }
    
    else if ( avg>70 && avg<80)
      {
          cout <<  "Your average is " << avg << " marks and you have got a B!Excellent!!"<< endl;
      }
    
    else if ( avg>60 && avg<70)
    {
            cout <<  "Your average is " << avg << " marks and you have got a C!Good!!" << endl;
    }
    
    else if ( avg>40 && avg<60)

    {
        cout <<  "Your average is " << avg << " marks and you have got a D!Poor!!"<< endl;
    }
    else
         
    {
    cout << "Your average is " << avg << " marks and you have got an E!Very Poor!!"<< endl;
    }
    return 0;
    
}