#include<stdio.h> 
void main() 
{ 
   int sum=0,amount; 
    for(;;) 
    {   /*enter amount
         after all amount entered
         enter 0 as last amount */ 
        printf("Enter amount:"); 
        scanf("%d",&amount); 
    if(amount==0) 
        {
            break; 
    } 
    else //sum of entered amount logic
        { 
            sum=sum+amount;
        } 
    } 
    printf("Total amount : %d",sum); 
    printf("\nThis program is performed by DARSH_22CS051");
}

