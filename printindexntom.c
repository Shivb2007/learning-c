#include<stdio.h>

char printindex(char index[],int n,int m);
void main()
{
    char name[100];
    printf("Enter your name : ");
    gets(name);
    int n,m;
    printf("Enter index n to m : ");
    scanf("%d%d",&n,&m);
    printindex(name,n,m);
}

char printindex(char index[],int n,int m)
{
    for(int i=n;i<=m;i++){
            printf("%c",index[i]);
    }
}