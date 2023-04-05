#include<stdio.h> 
int main()
{
    int i,base,power,ans=1;
    printf("Enter value for base:"); 
    scanf("%d",&base);//enter base
    printf("Enter value for power:"); 
    scanf("%d",&power);//enter power 
    i=1; 
    while(i<=power)//power calculation logic 
    {
        ans=ans*base; 
        i++; 
    }    
    printf("Answer= %d",ans);
    printf("\nThis program is performed by DARSH_22CS051");
}