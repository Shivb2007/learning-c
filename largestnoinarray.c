#include<stdio.h>

int com(int arr[]);
void main()
{
    int number[3];
    printf("Enter 3 no : ");
    for(int i=0;i<3;i++){
        scanf("%d",&number[i]);
    }
    com(number);
}

int com(int arr[])
{
    if(arr[0]>arr[1]){
        if(arr[0]>arr[2]){
            printf("%d is largest",arr[0]);
        }

        else{
            printf("%d is largest",arr[2]);
        }
    }

    else{
        if(arr[1]>arr[2]){
            printf("%d is largest",arr[1]);
        }

        else{
            printf("%d is largest",arr[2]);
        }

    }
}