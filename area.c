#include<stdio.h>

float circle(int r);
int square(int side);
int rect(int x,int y);

void main()
{
    int x,y,side,r;
    char a;
    float area;
    printf("Enter s for square, c for circle, r for rectangle :-");
    scanf("%s",&a);

    if(a=='s')
    {
        square(side);
    }
    else if(a=='c')
        circle(r);
    else
        rect(x,y);
}

float circle(int r)
{
    float area;
    printf("Enter radius:- ");
    scanf("%d",&r);
    area=(2)*(3.14)*(r);
    printf("Area of Circle is : %f",area);
}

int square(int side)
{
    int area;
    printf("Enter side of square:- ");
    scanf("%d",&side);
    area=side*side;
    printf("Area of Square is : %d",area);
}

int rect(int x,int y)
{
    int area;
    printf("Enter Two sides of rectangle:- ");
    scanf("%d%d",&x,&y);
    area=x*y;
    printf("Area of Rectabgle is : %d",area);
}