#include<stdio.h>

void pre(char str[],char f);
void main()
{
    char str[100],f;
    printf("Enter sentence : ");
    gets(str);
    printf("Enter a character to find : ");
    scanf("%c",&f);
    pre(str,f);

}

void pre(char str[],char f)
{
    int count=0;
    for(int i=0;str[i] != '\0';i++){
        if(str[i]==f){
            count++;                //we can write by printf("Yes");
                                    //return;
        }
    }
                                    //printf("No");
    if(count>0){
        printf("Yes");
    }

    else{
        printf("No");
    }
}