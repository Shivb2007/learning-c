#include<stdio.h>

void main()
{
    int age1=33;
    int age2=45;
    int *ptr1=&age1;
    int *ptr2=&age2;

    printf("%u,%u,Difference : %d",ptr1,ptr2,ptr1-ptr2);
}