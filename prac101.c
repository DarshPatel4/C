#include<stdio.h>
struct book
{
    char book_name[400];
    char author[300];
    float price; 
};
    void book_Details(struct book b1)
    {   
        printf("Book Name : %s\n",b1.book_name);
        printf("Author of Book :%s\n",b1.author);
        printf("Price of Book :%f Rs.\n",b1.price);
    }
    int main()
            {struct book b1;
            int i;
            printf("Program is performed by 22CS051\n");
            for(i=1;i<=3;i++)
            {
                printf("Enter book Name :");
                scanf("%s",b1.book_name);
                printf("Enter name of Author :");
                scanf("%s",b1.author);
                printf("Enter price of Book :");
                scanf("%f",&b1.price);
                printf("\n");
            }         
                for (i=0;i<3;i++)
                book_Details(b1);
    }