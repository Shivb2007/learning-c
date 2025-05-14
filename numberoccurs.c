#include<stdio.h>

int check(int arr[],int n);
void main()
{
    int number[5],x;
    printf("Enter 5 no : ");
    
    for(int i=0;i<5;i++){
    scanf("%d",&number[i]);
    }

    printf("Enter no for check : ");
    scanf("%d",&x);

    printf("Your no. occurs %d times",check(number,x));

}

int check(int arr[],int n)
{
    int count=0;

    for(int i=0;i<5;i++){
        if(arr[i]==n){
            count++;
        }
    }
    return count;
}