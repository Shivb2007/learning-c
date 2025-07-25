#include<stdio.h>

void main()
{
    int n;
    printf("Enter no : ");
    scanf("%d",&n);

    FILE *fptr;
    fptr=fopen("oddno.txt","w");
    
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            fprintf(fptr,"%d\t",i);
        }
    }

    fclose(fptr);
}