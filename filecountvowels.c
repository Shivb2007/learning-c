#include<stdio.h>

void main()
{
    FILE *fptr;
    fptr=fopen("string.txt","r");

    char ch[50];
    fscanf(fptr,"%s",ch);

    fclose(fptr);


    fptr=fopen("string.txt","w");

    int count=0;
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u')
        {
            count++;
        }
    }

    fprintf(fptr,"%d",count);

    fclose(fptr);
}