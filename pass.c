//This program is performed by DARSH_22CS051
#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main()
{
    int loop = 0,n = 0,upper = 0,digit = 0,lower = 0;
    char pass[50];
    do
    {
        upper = 0,digit = 0,lower = 0,loop = 0;
        printf("Enter the Password:");
        scanf("%s",pass);
        do
        {
            if(isupper(pass[loop]))
            {
                upper = 1;
            }
            else if(islower(pass[loop]))
            {
                lower = 1;
            }
            else if(isdigit(pass[loop]))
            {
                digit = 1;
            }
            loop++;
        
        } while (loop < strlen(pass));
        if(digit == 1 && lower == 1 && upper == 1)
        {
            printf("Good Password, you may proceed\n");
            break;
        }
        else
        {
            printf("Password does not satisfy constraints!!! Please try again\n");
        }
        n++;
    } while (n<5);
    printf("This program is performed by DARSH_22CS051");
}