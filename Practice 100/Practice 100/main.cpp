#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int* roll;
    int* marks;
    
        int n;
    cin>>n;
    roll = new int[n];
    marks = new int[n];
    

    
    for(int i=0; i<n;i++)
    {
        cout << "Enter roll and marks : ";
        cin >> roll[i];
            cin>>marks[i];
        
    }
    
    for(int i=0; i<n;i++)
    {
        cout << "roll and marks : ";
        cout << roll[i] << " ";
                   cout<<marks[i];
        cout << endl;
        
    }
    
    delete []roll;
    delete []marks;

}