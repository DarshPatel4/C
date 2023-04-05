#include<stdio.h>
#include<string.h>
union book
{
    float amount;
    char name[30];
    char a_name[30];
};
    void main()
        {
            union book b[3];
            int i,flag;
            for(i=0;i<2;i++)
            {
                printf("enter book title:-");
                scanf("%s",b[i].name);
                printf("enter author name:-");
                scanf("%s",b[i].a_name);
                printf("enter the amount:-");
                scanf("%f",&b[i].amount);
                printf("if you input flag=1,then book is issued...");
                printf("\nif you input flag=0 then book is not issued.");
                printf("\nenter the flag: ");
                scanf("%d",&flag);
                if(flag==1)
                    {
                        printf("book is issued\n");
                    }
                    else
                        {
                            printf("book is not issued\n");
                        }
                            printf("\n");
            }
        }
