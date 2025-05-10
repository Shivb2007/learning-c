#include<stdio.h>

int p(float a,float b,float c);
void main()
{
    float a,b,c;
    printf("Enter marks of Science:- ");
    scanf("%f",&a);
    printf("Enter marks of Maths:- ");
    scanf("%f",&b);
    printf("Enter marks of Sanskrit:- ");
    scanf("%f",&c);

    p(a,b,c);
}

int p(float a,float b,float c)
{
    float marks;
    float percentage;
    marks=a+b+c;
    percentage=(marks*100)/300;
    printf("Percentage is : %f",percentage);
}