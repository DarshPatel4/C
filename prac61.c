#include<stdio.h>
int main()
{
    int n=0;
    do{
        char a[10];
    int up=0,lc=0,di=0,sc=0;
pass:
    printf("Enter password: ");//enter password
    scanf("%s",&a);
    for(int i=0;i<=6;i++)//checking constrains for password
    {
        if(a[i]>='A' && a[i]<='Z')
            up++;
        else if(a[i]>='a' && a[i]<='z')
            lc++;
        else if(a[i]>='0' && a[i]<='9')
            di++;
    }
    if((up>=1 && lc>=1) && di>=1)
    {
        printf("Good Password, you may proceed");
        break;
    }
    else {
            printf("Password does not satisfy constraints!!! Please try again\n");
        goto pass;
    }
   
}while(n<4);
    printf("\nThis program is performed by 22CS051_DARSH");
}
