#include<stdio.h>

struct vector{
    int x,y;
};
int sum(int x1,int y1,int x2,int y2);
void main()
{
    struct vector v1;
    printf("Enter value of vector 1 : ");
    scanf("%d%d",&v1.x,&v1.y);

    struct vector v2;
    printf("Enter value of vector 2 : ");
    scanf("%d%d",&v2.x,&v2.y);

    sum(v1.x,v1.y,v2.x,v2.y);

}

int sum(int x1,int y1,int x2,int y2){
    int x,y;
    x=x1+x2;
    y=y1+y2;
    printf("Sum of vector : %di+%dj",x,y);
}