#include<stdio.h>

void main()
{
    FILE *fptr;
    fptr=fopen("sum.txt","r");

    int a,b;
    fscanf(fptr,"%d",&a);
    fscanf(fptr,"%d",&b);

    fclose(fptr);

    fptr=fopen("sum.txt","w");

    int sum;
    sum=a+b;
    fprintf(fptr,"%d",sum);

    fclose(fptr);
}