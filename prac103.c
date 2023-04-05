#include<stdio.h>
struct address
{ 
    char city[20],address[20];
    int age,salary;
};
    struct employee
        {
            char name[20];
            struct address add[3];
        };
        int main()
            {
                struct employee n[3];
                int i;
                printf("Program is performed by 22CS051 ");
                for(i=0;i<3;i++)
                {
                    printf("\nEnter name:");
                    scanf("%s",n[i].name);
                    printf("enter city name:");
                    scanf("%s",n[i].add[i].city);
                    printf("enter address:");
                    scanf("%s",n[i].add[i].address);
                    printf("enter age:");
                    scanf("%d",&n[i].add[i].age);
                    printf("enter salary:");
                    scanf("%d",&n[i].add[i].salary);
                }
                    printf("\nemployee's details:\n");
                    for(i=0;i<3;i++)
                        {
                            printf("\nname:%s \ncityname:%s \naddress:%s",n[i].name,n[i].add[i].city,n[i].add[i].address);
                            printf("\nage:%d \nsalary:%d\n",n[i].add[i].age,n[i].add[i].salary);
                        }
            }