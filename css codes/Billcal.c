#include<stdio.h>
#include<stdlib.h>
#define rupees_per_unit 7;

FILE *fptr;
int old_unit=0;
void Calculate_Unit()
{
    int unit,new_unit;
    fptr=fopen("Units.txt","r");
    if (fptr != NULL) {
        fscanf(fptr,"%d",&old_unit);
    }
        fclose(fptr);
    printf("\nEnter value of new Unit:- ");
    scanf("%d",&new_unit);
    if(new_unit<old_unit){
        printf("New unit should not less than old unit");
        return;
    }
    printf("value of new unit=%d",new_unit);
    printf("\nvalue of old unit=%d",old_unit);
    unit=(new_unit-old_unit)*rupees_per_unit;
    printf("\nThe generated bill is:- %d",unit);
    fptr=fopen("Units.txt","w");
    fprintf(fptr,"%d",new_unit);
    fclose(fptr);
}

void Reset_Unit(){
    int r;
    fptr=fopen("Units.txt","w");
    printf("Enter reset value:- ");
    scanf("%d",&r);
    fprintf(fptr,"%d",r);
    printf("%d is reset successfully",r);
    fclose(fptr);
}

void Previous_Unit(){
    int c;
    fptr=fopen("Units.txt","r");
    if(fptr != NULL){
            fscanf(fptr,"%d",&c);
            printf("Last unit is:- %d",c);
            fclose(fptr);
    }
    else{
        fptr=fopen("Units.txt","w");
        fprintf(fptr,"%d",0);
        printf("Last unit is:- %d",old_unit);
        fclose(fptr);
    }
}

int main()
{
    int choice;
    while(1){
        printf("\n\nEnter 1.Calculate Unit \n2.Check old units \n3.reset unit \n4.Exit:- ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1: Calculate_Unit();
            break;
        case 2: Previous_Unit();
            break;
        case 3: Reset_Unit();
            break;
        case 4: exit(0);
        
        default: printf("Invalid Choice");
            break;
        }
    }
}