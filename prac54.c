//This program is performed by DARSH_22CS051
#include<stdio.h>
void main()
{
    int stock,order;
    char credit;//character declaration
    //user input 
    printf("Enter the value of stocks:");
    scanf("%d",&stock);
    printf("Enter the value of credit:");
    scanf("%s",&credit);
    printf("Enter the value of order:");
    scanf("%d",&order);
    //condition for suply requirements and refund
    if(order<=stock && (credit=='y' || credit=='Y'))
    {
        printf("supplied customor's requirment\n\tQuentity:%d",order);
    }
    else if(order>stock && (credit=='y' || credit=='Y'))
    {
      printf("out of stock.Supplied %d products \n",stock);  
      printf("your balance will be refunded");
    }
else if(credit=='n' || credit=='N')
{
    printf("Your credit is not OK");
}
else
{
    printf("please enter the proper details!!");
}
printf("\nThis program is performed by DARSH_22CS051");
}