#include<stdio.h>

int f(int n);
void main()
{
    int n;
    printf("Enter n:- ");
    scanf("%d",&n);
    printf("\t%d",f(n));
}

int f(int n)
{
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    int sumofnm1nm2;
    sumofnm1nm2=f(n-1)+f(n-2);
    return sumofnm1nm2;
    
}