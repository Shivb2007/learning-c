#include<stdio.h>

void swap(int a,int b);
void _swap(int *a,int *b);
void main()
{
    int x=3,y=5;
    _swap(&x,&y);
    printf("\n x is %d & y is %d",x,y);
}

//Call by Value
void swap(int a,int b)
{
    int t=a;
    a=b;
    b=t;
    printf("a is %d & b is %d",a,b);
}

//Call by reference
void _swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
    printf("a is %d & b is %d",*a,*b);
}