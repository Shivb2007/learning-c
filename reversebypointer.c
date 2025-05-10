#include<stdio.h>

int rev(int *a);
void main()
{
    int x;
    printf("Enter a three digit value:- ");
    scanf("%d",&x);
    rev(&x);
}

int rev(int *a)
{
    printf("Reverse no is %d%d%d",(*a%10),(*a/10)%10,(*a/10)/10);
}