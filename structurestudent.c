#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int roll;
    int cgpa;

};

void main()
{
    struct student s1;
    printf("Enter your name : ");
    gets(s1.name);
    printf("Enter your roll : ");
    scanf("%d",&s1.roll);
    printf("Enter your cgpa : ");
    scanf("%d",&s1.cgpa);
    
    printf("\nStudent name : ");
    puts(s1.name);
    printf("Student roll no : %d \nStudent cgpa : %d",s1.roll,s1.cgpa);
}