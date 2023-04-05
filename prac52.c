//this program is performed by 22CS051
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n;
    float i,a,b,c,r1,r2,dis;
    //Taking user input
printf("Enter the value of a:");
scanf("%f",&a);
printf("Enter the value of b:");
scanf("%f",&b);
printf("Enter the value of c:");
scanf("%f",&c);
dis=b*b-4*a*c;//Discriminant=b^2-4ac
 if(dis>0)
    {
        n=1;
    }
    else
    {
    if(dis<0)
        {
            n=2;
        }
        else
            {
                n=3;
            }
    }//casewise operations
    switch(n)
        {
            case 1:
        r1=(-b+sqrt(dis))/(2*a);
        r2=(-b-sqrt(dis))/(2*a);
printf("\nThe value for root-1 is %f and root-2 is %f",r1,r2);
        break;
            case 2:
        r1=-b/2*a;
        i=sqrt(-dis)/(2*a);
printf("\nThe value of root is %f + i%f",r1,i);
        break;
            case 3:
        r1=r2=-b/2*a;
printf("\nThe value of root is %f",r1);
        break;
        default:
printf("\n It's wrong");
        }
printf("\nThis program is performed by Darsh_22CS051");
getch();
}