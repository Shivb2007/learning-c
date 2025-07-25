#include<stdio.h>
#include<string.h>

struct add{
    int houseno;
    char block[50];
    char city[50];
    char state[50];
};

void main()
{
    
    for(int i=2;i<3;i++){
        struct add a[i];
        printf("Enter your house no : ");
        scanf("%d",&a[i].houseno);
        printf("Enter your block : ");
        scanf("%s",a[i].block);
        printf("Enter your City : ");
        scanf("%s",a[i].city);
        printf("Enter your State : ");
        scanf("%s",a[i].state);
    }

    for(int i=2;i<3;i++){
        struct add a[i];
        printf("\nYour house no : %d",a[i].houseno);
        printf("\nYour block is : %s",a[i].block);
        printf("\nYour city is : %s",a[i].city);
        printf("\nYour State is : %s",a[i].state);
    }
}