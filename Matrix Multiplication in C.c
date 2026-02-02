// Matrix Multiplication in C//
#include <stdio.h>
#include <conio.h>

void main() 
{
    int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q,k;
    printf("Size of Matrix 1\n");
    scanf("%d%d",&m,&n);
    printf("The Elements of 1st Matrix,\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nSize of Matrix 2\n");
    scanf("%d%d",&p,&q);
    printf("The Elements of 2nd Matrix,\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(n!=p)
    {
        printf("Multiplication is not possible\n");
        return 1;
    }
    else
    {
        printf("Matrix Multiplication\n");
    }
    printf("Result,\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            for(k=0;k<q;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }

    getch();
}