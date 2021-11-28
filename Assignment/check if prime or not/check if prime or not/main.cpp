//
//  main.cpp
//  check if prime or not
//
//  Created by Manav Chawla on 6/17/14.
//  Copyright (c) 2014 Manav Chawla. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
	int i=2, n=0;
	
	cout<<"Enter a number to check whether it is a prime number or not: ";
	cin>>n;
	
	if(n<=1)
	{
		cout<<n<<" is not a prime number."<<endl;
		cout<<"Please input another number which is greater than 1: ";
		cin>>n;
		
	}
    
    
	
	while(i <= n)
	{
		if (n == i)
		{
			cout<<n<<" is a prime number.";
			break;
		}
		
		else if (n % i == 0)
		{
            
            cout<<n<<" is not a prime number.";
			break;
		}
		
		else
            i++;
		
	}
	return 0;
}