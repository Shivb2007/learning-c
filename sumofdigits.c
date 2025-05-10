#include<stdio.h>

int sum(int n);
void main()
{
    int n,x;
    printf("Enter no of digits:- ");
    scanf("%d",&x);
    printf("Enter any Number:- ");
    scanf("%d",&n);
    printf("Sum of digits of given no is : %d",sum(n));
}

int sum(int n)
{
    int sum,x;
    if(x==1)
    {
        printf("Enter more than 1 digit in value");
    }

    else if(x==2)
    {
         sum=(n%10) + (n/10);
    }
    else if(x==3)
    {
         sum=(n%10) + ((n/10)%10) + ((n/100)/10);
    }
    else if(x==4)
    {
         sum=(n%10) + ((n/10)%10) + ((n/100)%10) + (n/1000);
    }
    else
    {
         sum=(n%10) + ((n/10)%10) + ((n/100)%10) + ((n/1000)%10) + (n/10000);
    }
    return sum;
}