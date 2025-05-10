#include<stdio.h>

void main()
{
    int n,i;
    printf("Enter value:- ");
    scanf("%d",&n);

    for(i=10;i>=1;i--){
    printf("\n %d",n*i);
    }
}