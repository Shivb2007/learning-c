#include<stdio.h>

char printstring(char arr[]);

void main()
{
    char firstname[]="Shiv";
    char lastname[]="Bhatt";
    printstring(firstname);
    printstring(lastname);
}

char printstring(char arr[])
{
    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}