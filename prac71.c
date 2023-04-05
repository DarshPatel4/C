#include<stdio.h>
int main()
{
    int i=0,a[30],pos=0,neg=0,even=0,odd=0;
    printf("Enter 25 numbers:\n");
    for(i=0;i<25;i++)
    {
        scanf("%d",&a[i]);//entering 10 values
        if (a[i]>0)//positive-negative conditions
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }
    for(i=0;i<10;i++)
    {   
        if (a[i]%2==0)//even-odd conditoins
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
  printf("\nPositive numbers:%d",pos);
  printf("\nNegative numbers:%d",neg);
  printf("\nEven numbers:%d",even);
  printf("\nOdd number:%d",odd);
  printf("\nThis program is performed by 22CS051_DARSH");
  return 0;
}
