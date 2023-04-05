#include<stdio.h>
int main()
{
    int M_Sticks=21,User_Choice,Computer_Choice;
    while(M_Sticks>=1)
    {   //enter user choice
        printf("Enter the number of match-sticks(1 to 4):");
        scanf("%d",&User_Choice);
        if(User_Choice>4 || User_Choice<1 )
        {
            printf("Goli beta masti nai!!\n");
            continue;
        }
        Computer_Choice= 5 - User_Choice;//computer's choice
        printf("Computer is choosing %d\n",Computer_Choice);
        M_Sticks=M_Sticks-5;
            if(M_Sticks==1)
            {
                printf("You pick last stick\n");
                printf("You are beaten by Computer!!!");
                printf("\nBetter luck next time..");
                break;
            }      
    }
    printf("\nThis program is performed by DARSH_22CS051");
}