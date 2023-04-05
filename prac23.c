             //this program  is performed by Darsh_22CS051//
#include<stdio.h>
int main()
{
    int BasicSalary,DA,HRA,MA,TA,PF,IT,allowance,Deduction,GrossSalary,NS;
    printf("enter the basic salary  : ");
    scanf("%d",&BasicSalary);

    DA=BasicSalary*70/100;//calculation of DA
    HRA=BasicSalary*7/100;//calculation of HRA
    MA=BasicSalary*2/100;//calculation of MA
    TA=BasicSalary*4/100;//calculation of TA
    PF=BasicSalary*12/100;//calculation of PF
    allowance=DA+HRA+MA+TA;//allowance calculation
    IT=500;//value declaration
    Deduction=PF+IT;//deduction calculation
    GrossSalary=BasicSalary+allowance;//gross salary calculation
    NS=GrossSalary-Deduction;//calculation of NS
    //making table 
    printf("Sr.No.\t\tInput/Output\t\t\tAmount\n");
    printf("1\t\tEnter your Basic Salary\t\t%d\n",BasicSalary);
    printf("2\t\tDA of Basic Salary\t\t%d\n",DA);
    printf("3\t\tHRA of Basic Salary\t\t%d\n",HRA);
    printf("4\t\tMA of Basic Salary\t\t%d\n",MA);
    printf("5\t\tTA of Basic Salary\t\t%d\n",TA);
    printf("6\t\tPF of Basic Salary\t\t%d\n",PF);
    printf("7\t\tGross salary\t\t\t%d\n",GrossSalary);
    printf("8\t\tNet salary\t\t\t%d\n",NS);
    printf("This program is performed by Darsh_22CS051");
}