        //This program is performed by Darsh_22TCS001
#include<stdio.h>
#include<math.h>
#define pi  3.14
void main(void)
{
    //Declaring the required variables
    float l, T, g;
        /*l = Length of the pendulum in meters
          T = Time period of pendulum
          g = Acceleration due to gravity*/
    // Getting length as an input
    printf("Enter length of pendulum in meter:");
    scanf("%f",&l);
    // Getting g as an input
    printf("Enter the value of g:");
    scanf("%f",&g);
    //Formula to find time period
    T = 2*pi*sqrt(l/g);
    //Printing the value of time period
    printf("The time period of pendulum:%.2f sec\n",T);
    printf("This program is performed by Darsh_22TCS001");
}