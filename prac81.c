#include<stdio.h>
#include<string.h> 
int main() 
{ 
   int i,l,n,j=0; 
   char a[50]; 
   printf("enter the name:"); 
   gets(a); 
   strlen(a); 
   l=strlen(a); 
   n=l/2; 
   for(i=0;i<n;i++)//palindrome condition 
      { 
         if(a[i]==a[l-1-i] || a[i]==32+a[l-1-i] || a[i]==a[l-1-i]-32) 
            { 
               j++; 
               continue; 
            }  
      } 
      if(j>=n) 
         { 
            printf("inputted string is palindrome"); 
         } 
         else if(j<n) 
            { 
               printf("inputted string is not palindrome"); 
            }
            printf("\nThis program is performed by 22CS051_DARSH"); 
 return 0; 
} 
