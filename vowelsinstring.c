#include<stdio.h>

int check(char vowel[]);
void main()
{
    char str[100];
    printf("Enter sentance to check vowels : ");
    gets(str);
    printf("%d",check(str));
}

int check(char vowel[])
{
    int count=0;
    for(int i=0;vowel[i] != '\0';i++){
        if(vowel[i]=='a' || vowel[i]=='e' || vowel[i]=='i' || vowel[i]=='o' || vowel[i]=='u'){
            count++;
        }
    }
    return count;
}