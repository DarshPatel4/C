        // swapping two numbers using two variables
#include<stdio.h>
int main()
{       
    int number1,number2,temp;
        // user input
        printf("Enter the first number:");
        scanf("%d",&number1);
        printf("Enter the second number:");
        scanf("%d",&number2);
        //swapping values
    temp=number1;
    number1=number2;
    number2=temp;
        printf("after swapping number1 is:%d\n",number1);
        printf("after swapping number2 is:%d",number2);
}