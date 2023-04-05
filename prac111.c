#include<stdio.h>
int main()
{
    int S_Name[10],i,*ptr;
    int dis=0,fc=0,pass=0,fail=0;
    ptr=S_Name;
    for(i=0;i<10;i++)
    {
        printf("Marks of Student %d : ",i+1);
        scanf("%d",ptr);
        ptr++;
    }
    for(ptr=S_Name;ptr<=&S_Name[10];ptr++)
    {
        if(*ptr>=70)
        {
            dis++;
        }
        else if((*ptr<=69) && (*ptr>=60))
        {
            fc++;
        }
        else if((*ptr<=59) && (*ptr>=40))
        {
            pass++;
        }
        else
        {
            fail++;
        }
    }
    printf("Distriction: %d",dis);
    printf("\nFirst Class: %d",fc);
    printf("\nPass: %d",pass);
    printf("\nFail: %d",fail);
    printf("\nThis program is performed by 22CS051_DARSH");
    //return 0;
}