//
//  main.c
//  calc
//
//  Created by Manav Chawla on 3/29/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include <stdio.h>

int main()
{
    int x;
    float a,b,c;
    printf("Enter number 1 : ");
    scanf("%f",&a);
    printf("Enter number 2 : ");
    scanf("%f",&b);
    
    printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division : ");
    scanf("%d",&x);
    
    switch(x)
    {
        case 1 :
            c=a+b;
            printf("Sum is : %0.2f \n",c);
            break;
        case 2 :
            c=a-b;
            printf("Diff is : %0.2f \n",c);
            break;
        case 3 :
            c=a*b;
            printf("Product is : %0.2f \n",c);
            break;
        case 4 :
            c=a/b;
            printf("Quotient is : %0.2f \n",c);
            break;
        default :
            printf("Wrong input \n");
            break;
            
            
    }
    printf("Thank you for using");
    
    return 0;
}