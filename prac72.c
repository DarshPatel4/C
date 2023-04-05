#include<stdio.h> 
#include<conio.h> 
int main() 
{ 
    int a[90],i,A,B,c[90],b[90],k,temp,j; 
    printf("Enter the number of A:"); 
    scanf("%d",&A); 
    for(i=0;i<A;i++) 
        { 
            scanf("%d",&a[i]); 
            c[i]=a[i]; 
        } k=i; 
            printf("Enter the number of B:"); 
            scanf("%d",&B);
            for(i=0;i<B;i++) 
            { 
                scanf("%d",&b[i]); 
                c[k]=b[i]; 
                k++; 
            } 
            for(i=0;i<k;i++) 
                { 
                for(j=i+1;j<k;j++) 
                    { 
                        if(c[j]<c[i]) 
                        { 
                            temp=c[i]; 
                            c[i]=c[j]; 
                            c[j]=temp; 
                        } 
                        else 
                            { 
                                continue; 
                            } 
                    }       
                }    
    printf("merge and short array of A and B\n"); 
    for(i=0;i<k;i++) 
        { 
            printf("%d ",c[i]); 
        } 
            return 0; 
}