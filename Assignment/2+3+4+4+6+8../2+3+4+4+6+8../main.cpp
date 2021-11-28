//
//  main.cpp
//  2+3+4+4+6+8..
//
//  Created by Manav Chawla on 6/22/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

// WAP to print the value of S, where S= 2+ 3+ 4+ 4+ 6+ 8+ 6+ 9+ 12............. 100 terms.

#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	
	for (int i = 1; i <= 25; i++)
	{
		sum = sum + (2 + 3 + 4) * i;
	}
    
	cout<<"S = "<<  sum << endl;
    
	return 0;
}
