#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *ptr;
    ptr=(int*)calloc(5,sizeof(int));
    
    for(int i=0;i<5;i++){
        printf("Enter value %d : ",i);
        scanf("%d",&ptr[i]);
    }

    for(int i=0;i<5;i++){
        printf("Number of %d is %d\n",i,ptr[i]);
    }
}