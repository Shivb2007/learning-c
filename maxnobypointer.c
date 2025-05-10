#include<stdio.h>

void max(int *a,int *b);
void main()
{
    int x,y;
    printf("Enter two numbers:- ");
    scanf("%d%d",&x,&y);
    max(&x,&y);
}

void max(int *a,int *b)
{
    if(*a>*b)
    {
        printf("X is greater");
    }
    else{
        printf("Y is greater");
    }
}