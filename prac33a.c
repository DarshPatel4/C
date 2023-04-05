#include<stdio.h>
main()
{
 float a,b;
    printf("\n Enter the value of a:");
    scanf("%f",&a);
    printf("\n Enter the value of b:");
    scanf("%f",&b);
    printf("Sr.No.\tInstruction\t\tNumber1\t\tnumber2");
    printf("\n1.\tBefore swapping\t\t%f\t%f",a,b);
 a = a+b;
 b = a-b;
 a = a-b;
    printf("\n2.\tAfter swapping\t\t%f\t%f\n",a,b);
    printf("This program is performed by Darsh_22TCS001");
}
