#include<stdio.h>

int length(char arr[]);
void main()
{
    char name[100];
    gets(name);
    printf("length is %d",length(name));
}

int length(char arr[])
{
    int count=0;
    for(int i=0;arr[i]!=0;i++){
        count++;
    }
    return count;
}