#include<stdio.h>

int sum(int a,int b);
int pro(int a,int b);
int avg(int *a,int *b,int *avr); 
void main()
{
    int x,y,avr;
    printf("Enter value of x : ");
    scanf("%d",&x);
    printf("Enter value of y : ");
    scanf("%d",&y);

    sum(x,y);
    pro(x,y);
    avg(&x,&y,&avr);
    printf("\nAverage is %d",avr);

}

int sum(int a,int b)
{
    int sum=a+b;
    printf("\nSum is %d",sum);
}

int pro(int a,int b)
{
    int pro=a*b;
    printf("\nProduct is %d",pro);
}
int avg(int *a,int *b,int *avr)
{
    *avr=((*a)+(*b))/2;
}