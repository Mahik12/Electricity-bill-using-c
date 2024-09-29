#include<stdio.h>
void main()
{
    int a,d;
    float b;
    char c[50];
    printf("Enter the Customer ID: ");
    scanf("%d",&a);
    printf("Enter Customer Name: ");
    scanf("%s",&c);
    printf("Enter the unit consumed by the customer: ");
    scanf("%f",&b);
    if(b<=199)
    {
        float d = b*1.2;
        

    }

    else    
    {
        if(b>=200 && b<400)
        {
             d = b*1.5;
            
        }
        if(b>=400 && b<600)
        {
            d = b*1.8;
            
        }
    }
    if(d>400)
    {
        int e = d*0.15;
        d+=e;
        
    }
    if(d<100)
    {
        d=100;
    }
    printf("Total amount is to be paid :%.2f",d);
}