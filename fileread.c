#include<stdio.h>

void main()
{
    FILE *fptr;
    fptr= fopen("text.txt","r");
    int x;
    for(int i=1;i<6;i++){
    fscanf(fptr,"%d",&x);
    printf("%d",x);
    }
    fclose(fptr);
}