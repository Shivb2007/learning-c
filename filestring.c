#include<stdio.h>

void main()
{
    FILE *fptr;
    fptr=fopen("string.txt","r");
    char ch[50];

    fscanf(fptr,"%s",ch);
    printf("%s",ch);
}