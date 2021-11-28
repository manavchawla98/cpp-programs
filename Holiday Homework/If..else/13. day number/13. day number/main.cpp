//
//  main.cpp
//  13. day number
//
//  Created by Manav Chawla on 9/5/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int t,day;
    
    cout << setw(10) << "Day" << setw(40) << "Number"  << endl;
    cout << "     Saturday" << "                                 1" << endl;
    cout << "     Sunday"  << "                                   2" << endl;
    cout << "     Monday"  << "                                   3" << endl;
    cout << "     Tuesday"  << "                                  4" << endl;
    cout << "     Wednesday" << "                                5" << endl;
    cout << "     Thursday" << "                                 6" << endl;
    cout << "     Friday" << "                                   7" << endl;
    
    cout << endl << endl;
    
    cout << "Enter your day number : ";
    cin >> day;
    
    cout << "Enter number of tickets : ";
    cin >> t;
    
    if (day==1)
    {
        cout << "The fee is Dhs 5.";
        cout << "The amount to be paid for " << t << " tickets is " << 5*t << endl;
    }
    
    else if (day==2)
    {
        cout << "The fee is Dhs 4.";
        cout << "The amount to be paid for " << t << " tickets is " << 4*t << endl;
    }
    
    
    else if (day==3)
    {
        cout << "The fee is Dhs 3.";
        cout << "The amount to be paid for " << t << " tickets is " << 3*t << endl;
    }
    
    
    else if (day==4)
    {
        cout << "The fee is Dhs 2.";
        cout << "The amount to be paid for " << t << " tickets is " << 2*t << endl;
    }
    
    
    else if (day==5)
    {
        cout << "The fee is Dhs 2.";
        cout << "The amount to be paid for " << t << " tickets is " << 2*t << endl;
    }
    
    
    else if (day==6)
    {
        cout << "The fee is Dhs 5.";
        cout << "The amount to be paid for " << t << " tickets is " << 5*t << endl;
    }
    
    
    else if (day==7)
    {
        cout << "The fee is Dhs 4.";
        cout << "The amount to be paid for " << t << " tickets is " << 4*t << endl;
    }
    
    cout << endl << endl << setw(28) << "Thank you!" << endl;
    return 0;
}

