 //this program  is performed by Darsh_22CS051//
#include<stdio.h>
void main()
{
	int ram, shyam, ajay;
    //taking input from user
	printf("Enter the ages of Ram, Shyam, Ajay respectively:\n");
	scanf("%d %d %d",&ram,&shyam,&ajay);
    //conditions for comparison of the Ages 
	if(ram < shyam && ram < ajay && shyam!=ajay)
    {
        printf("Ram is the youngest");
    }
    else if(shyam < ram && shyam < ajay && ram!=ajay)
    {
        printf("Shyam is the youngest \n");
    } 
    else if(ajay < ram && ajay <shyam && ram!=shyam)
    {  
    printf("Ajay is the youngest"); 
    }
    else if(ram == shyam && shyam !=ajay)
    {
        printf("Ram and Shyam have equal age");
    }
    else if(shyam == ajay && ajay != ram)
    {
        printf("Shyam and Ajay have equal age");
    }
    else if(ram == ajay && ram != shyam)
    {
        printf("Ram and Ajay have equal age");
    }
    else if(ram == shyam && shyam == ajay && ajay == ram)
    {
        printf("All have same age");
    }
    printf("\nThis program is performed by DARSH_22CS051");
}