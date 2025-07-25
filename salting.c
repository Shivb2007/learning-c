#include<stdio.h>

char pass(char name);
void main()
{
    char name[100];
    gets(name);
    printf("%sabc",name);
}

char pass(char name)
{
    char salt[]="abc";
}