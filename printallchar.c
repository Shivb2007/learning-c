#include<stdio.h>

char print(char a);
void main()
{
    char i='z';
    print(i);
}

char print(char a)
{
    if(a>='a'){
    print(a-1);
    printf("\n%c",a);
    }
}