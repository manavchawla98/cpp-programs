
//To find the sum of series 1 + x1/2! + x2/3! + ........+xn/(n+1)!

#include <iostream>
#include <math.h>
using namespace std ;
int main()
{ float i=0 ,x=0 ,n=0 , fact=1 ,sum=0, z=0 ;
    
    cout<<"Enter your number : " ;
    cin>>x;
    
    cout<<"Enter the range - " ;
    cin>>n;
    
    for(i=0;i<=n;i++)
        
    {
        int fact = 1;
        
        for(z=i+1;z>0;z--)
            
        {        fact = fact*z ;
        }
        sum =  sum + (pow(x,i))/fact ;
    }
    cout<<sum<<endl;
    
    return 0;
}
