        //This program is performed by Darsh_22TCS001
#include<stdio.h>
int main()
{
 int y,p,cal;
        //taking user-input
    printf("Enter the value of y:");
    scanf("%d",&y);
    printf("Enter the value of p:");
    scanf("%d",&p);
        //equation
 cal = ++y + y++ + --y + ++p - --p - --p;
    printf("Value of calculation is: %d",cal);
    printf("\nCount of yellow after evaluation: %d",y);
    printf("\nCount of pink after evaluation: %d",p);
}
