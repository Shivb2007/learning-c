#include<stdio.h>

typedef struct ABCbank{
    char name[10];
    int account;
}acc;

void main()
{
    acc a[1];
    printf("Enter your name and account : ");
    scanf("%s",a[1].name);
    scanf("%d",&a[1].account);

    printf("Your name : %s",a[1].name);
    printf("\nYour account no : %d",a[1].account);
}