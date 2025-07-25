#include<stdio.h>

struct com{
    int real;
    int img;
};

void main(){
    struct com c1;
    printf("Enter complex value : ");
    scanf("%d%d",&c1.real,&c1.img);
    int *ptr=&c1;


    printf("Real part : %d",ptr->real);
    printf("\nImaginary part : %d",ptr->img);
}