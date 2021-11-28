//
//  main.c
//  area
//
//  Created by Manav Chawla on 4/10/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include <stdio.h>

int main ()
{
    float l,b,s,h,base,r,area;
    int x;
    

    printf("Enter 1 for square, 2 for triangle, 3 for rectangle, 4 for circle, 5 to exit : ");
    scanf("%d",&x);
        switch(x)
    {
        case 1 :
            printf("Enter the side : ");
            scanf("%f",&s);
            area=s*s;
            printf("%0.2f sq.units \n",area);
            break;
            
        case 2 :
            printf("Enter the height : ");
            scanf("%f",&h);
            printf("Enter the base : ");
            scanf("%f",&base);
            area=0.5*h*base;
            printf("%0.2f sq.units \n",area);
            break;
            
        case 3 :
            printf("Enter the length : ");
            scanf("%f",&l);
            printf("Enter the breadth : ");
            scanf("%f",&b);
            area=l*b;
            printf("%0.2f sq.units \n",area);
            break;

        case 4 :
            printf("Enter the radius : ");
            scanf("%f",&r);
            area=r*r*3.14;
            printf("%0.2f sq.units \n",area);
            break;
            
        case 5 :
            exit(0);
            
        default :
            printf("Wrong input");
            break;
    }

        
    
    
    return 0;
}