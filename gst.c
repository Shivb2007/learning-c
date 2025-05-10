#include<stdio.h>

float gst(int n);

void main()
{
    int n;
    printf("Enter price:-");
    scanf("%d",&n);
    float g=gst(n);
    printf("%f",g);

}

float gst(int n)
{
    return n+((n*18)/100);
}