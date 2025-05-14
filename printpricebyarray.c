#include<stdio.h>
void main()
{
    int price[3];
    printf("Enter price of pencil box:-");
    scanf("%d",&price[0]);

    printf("Enter price of rounder:-");
    scanf("%d",&price[1]);

    printf("Enter price of drawing book:-");
    scanf("%d",&price[2]);

    float pencil=price[0]+price[0]*(0.18);
    float rounder=price[1]+price[1]*(0.18);
    float drawing=price[2]+price[2]*(0.18);

    printf("\nPrice of pencil:- %f",pencil);
    printf("\nPrice of rounder:- %f",rounder);
    printf("\nPrice of drawing book:- %f",drawing);

}