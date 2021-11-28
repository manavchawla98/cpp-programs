//
//  main.cpp
//  11. sales and discount
//
//  Created by Manav Chawla on 9/5/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;

int main ()
{
    float sales, net, d;
    cout << "Enter the amount of sales : ";
    cin >> sales;
    
    if (sales>50000)
        d = 0.4*sales;
    else if (sales>=40001 && sales<=50000)
        d = 0.3*sales;
    else if (sales>=30001 && sales<=40000)
        d = 0.2*sales;
    else if (sales>=20001 && sales<=30000)
        d = 0.15*sales;
    else if (sales<=20000)
        d = 0.05*sales;
    else
        cout << "Wrong input." << endl;
    net = sales-d;
    cout << "The net price is : " << net << endl;
    return 0;
}
