#include<stdio.h>

int sum(int n);

void main()
{
    int n;
    printf("Enter n:- ");
    scanf("%d",&n);
    printf("%d",sum(n));
}

int sum(int n)
{
    if(n==1){
        return 1;
    }
    int sumnm1=sum(n-1);
    int sumn=sumnm1+n;
    return sumn;
}