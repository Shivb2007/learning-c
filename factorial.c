#include<stdio.h>

void main()
{
    int n,i,fact=1;
    printf("Enter no:- ");
    scanf("%d",&n);

    for(i=n;i>1;i--){
      fact=fact*i;
    }
    printf("%d",fact);
}