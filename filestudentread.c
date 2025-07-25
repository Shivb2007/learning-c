#include<stdio.h>

void main()
{
    FILE *fptr;
    fptr=fopen("student.txt","w");

    char name[50];
    int age;
    float cgpa;

    printf("Enter your name : ");
    scanf("%s",name);
    printf("Enter your age : ");
    scanf("%d",&age);
    printf("Enter your cgpa : ");
    scanf("%f",&cgpa);

    fprintf(fptr,"Your name : %s\n",name);
    fprintf(fptr,"Your age : %d\n",age);
    fprintf(fptr,"Your cgpa : %f",cgpa);

    fclose(fptr);
}