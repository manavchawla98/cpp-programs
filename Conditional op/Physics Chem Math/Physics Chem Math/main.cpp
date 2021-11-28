//
//  main.cpp
//  Physics Chem Math
//
//  Created by Manav Chawla on 6/22/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

// To accept the Physics, Chemistry and Math marks of a student and display the grade accordingly.

#include <iostream>
using namespace std;

int main()
{
    int m1,m2,m3,avg;
    
    cout << "Enter the marks obtained in Physics : ";
    cin >> m1;
    cout << "Enter the marks obtained in Mathematics : ";
    cin >> m2;
    cout << "Enter the marks obtained in Chemistry : ";
    cin >> m3;
    avg = (m1+m2+m3)/3;
    
    if (avg>90)
        cout << "You have secured Grade A. Congratulations!!" << endl;
    
    else if (avg>81 && avg<=90)
         cout << "You have secured Grade B. Good!!" << endl;
    
    else if (avg>71 && avg<=81)
         cout << "You have secured Grade C. Poor!!" << endl;
    
    else
         cout << "You have secured Grade D. Got to work harder!!" << endl;
    return 0;
    
}