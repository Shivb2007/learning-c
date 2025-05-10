#include<stdio.h>

float f(float n);
void main()
{
    float n;
    printf("Enter value of celcius:- ");
    scanf("%f",&n);
    printf("%f",f(n));
}

float f(float n)
{
    float fh;
    fh=(n*1.8)+32;
    return fh;
}