//
//  main.cpp
//  10. check validity of date
//
//  Created by Manav Chawla on 9/5/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//


#include <iostream>
using namespace std;

int main ()
{
    int d,m,y;
    cout << "Enter the date, month and year respectively : ";
    cin >> d >> m >> y;
    
    if (m>=1 && m<=12)
    {
        switch (m)
        {
            case 1 :
                if (d>=1 && d<=31)
                    cout << "Valid." << endl;
                else
                    cout << "Invalid." << endl;
                break;
            case 2 :
                if (y%4==0)
                {
                    if (d>=1 && d<=29)
                        cout << "Valid." << endl;
                    else
                        cout << "Invalid." << endl;
                }
                else
                {
                    if (d>=1 && d<=28)
                        cout << "Valid." << endl;
                    else
                        cout << "Invalid." << endl;
                }
                break;
            case 3 :
                if (d>=1 && d<=31)
                    cout << "Valid." << endl;
                else cout << "Invalid." << endl;
                break;
            case 4 :
                if (d>=1 && d<=30)
                    cout << "Valid." << endl;
                else cout << "Invalid." << endl;
                break;
                
            case 5 :
                if (d>=1 && d<=31)
                    cout << "Valid." << endl;
                else cout << "Invalid." << endl;
                break;
            case 6 :
                if (d>=1 && d<=30)
                    cout << "Valid." << endl;
                else cout << "Invalid." << endl;
                break;
            case 7 :
                if (d>=1 && d<=31)
                    cout << "Valid." << endl;
                else cout << "Invalid." << endl;
                break;
            case 8 :
                if (d>=1 && d<=31)
                    cout << "Valid." << endl;
                else cout << "Invalid." << endl;
                break;
            case 9 :
                if (d>=1 && d<=30)
                    cout << "Valid." << endl;
                else cout << "Invalid." << endl;
                break;
            case 10 :
                if (d>=1 && d<=31)
                    cout << "Valid." << endl;
                else cout << "Invalid." << endl;
                break;
            case 11 :
                if (d>=1 && d<=30)
                    cout << "Valid." << endl;
                else cout << "Invalid." << endl;
                break;
            case 12 :
                if (d>=1 && d<=31)
                    cout << "Valid." << endl;
                else cout << "Invalid." << endl;
                break;
            default :
                cout << "Wrong input." << endl;
        }
        
        
    }
    else
        cout << "Wrong input."  << endl;
    
    return 0;
}
