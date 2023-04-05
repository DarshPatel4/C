#include<stdio.h>
int main()
{
    int i,j;
    printf("\n \t \t \t MULTIPLICATION TABLE(1 TO 7)\n");
  //using for loop for printing pattern
  for(i=1;i<=12;i++)
  { 
    printf(" %c %c %c",45,45,45);
  } printf("\n");
  i=1;
    for(i=1;i<=10;i++){
        j=1;
        do{
            printf("\t%d", i*j);
            j++;
        }while(j<=7);
          printf("\n");
    }
      for(i=1;i<=12;i++)
      {
        printf(" %c %c %c",45,45,45);
      }
      printf("\nThis program is performed by DARSH_22CS051");
    return 0;
}