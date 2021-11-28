//
//  main.cpp
//  Convert days
//
//  Created by Manav Chawla on 4/23/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

// Program to convert given number of days to years, months, weeks, and days.

#include <iostream>

using namespace std;
int main ()

{
    int given, years, months, weeks, days;
    cout << "Enter the number of days : ";
    cin >> given;
    years = given/365;
    months = (given%365)/30;
    weeks = ((given%365)%30)/7;
    days = ((given%365)%30)%7;
    
cout << years << " years " << months << " months " << weeks << " weeks " << days << " days " << "\n";
    


    return 0;
}