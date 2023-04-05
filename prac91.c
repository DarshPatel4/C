#include<stdio.h>
int binary(int);
void main()
{
    int n;
    printf("This program is performed by 22CS051_DARSH\n");
    printf("Enter number n: ");
    scanf("%d",&n);
    printf("Binary: %d",binary(n));
}
int binary(int n)
{
    if(n==1)
        {
            return 1;
        }
    else
        {
            return ((n%2)+10*binary(n/2));
 }
}