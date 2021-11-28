//
//  main.cpp
//  Convert time
//
//  Created by Manav Chawla on 4/23/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

#include <iostream>

using namespace std;

int main ()

{
    int time, hours, mins;
    cout << "Enter time in minutes : ";
    cin >> time;
    hours = time/60;
    mins = time%60;
    
    cout << hours << " hours and " << mins << " mins." << endl;
    return 0;



}
