    //This program is performed by Darsh_22TCS001
#include<stdio.h>
int main()
{
    int h;
    //taking height's value from user
        printf("\nEnter your height in centimeters:");
        scanf("%d",&h);
    //conditional operations
    if(h<150)
    {
        printf("Person is dwarf.\n");
    }
    else if(h>=150 & h<165)
    {
        printf("Person has average height.\n");
    }
    else if(h>=165 & h<=195)
    {
        printf("Person is tall.\n");
    }
    else
    {
        printf("person has abnormal height.\n");
    }
    printf("This program is performed by DARSH_22CS051");
}