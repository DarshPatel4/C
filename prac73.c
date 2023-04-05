#include<stdio.h>
void main() 
    { 
        int a[3][3],i,j,k,c[3][3],b[3][3];
        printf("enter the value for matrix A:\n");//Matrix A 
        for(i=0;i<3;i++) 
        { 
           for(j=0;j<3;j++) 
            { 
                scanf("%d",&a[i][j]); 
            } 
        } 
        printf("enter the value for matrix B:\n");//Matrix B 
        for(i=0;i<3;i++) 
        { 
            for(j=0;j<3;j++) 
            { 
               scanf("%d",&b[i][j]); 
            } 
        } 
        //Matrix multiplication logic
            for(i=0;i<3;i++) 
        { 
            for(j=0;j<3;j++) 
            { 
                for(k=0;k<3;k++) 
                { 
                   c[i][j]+=(a[i][k]*b[k][i]); 
                } 
            } 
        } 
        printf("A*B=\n"); 
        for(i=0;i<3;i++) 
            { 
            for(j=0;j<3;j++) 
                { 
                    printf("%d",c[i][j]); 
                } 
                    printf("\n"); 
            } 
    printf("\nThis program is performed by 22CS051_DARSH");
}