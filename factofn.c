#include<stdio.h>

int fact(int n);
void main()
{
    int n;
    printf("Enter n:- ");
    scanf("%d",&n);
    printf("Factorial of given no is: %d",fact(n));
}

int fact(int n)
{
    if(n==1){
        return 1;
    }
    int factofnm1=fact(n-1);
    int factofn=fact(n-1)*n;
    return factofn;
}