#include <stdio.h>
#include <conio.h>
void main() 
{
    int a[10][10], b[10][10], c[10][10],i,j,m,n;
    printf("Rows & Cols of Matrix A:\n");
    scanf("%d%d",&m,&n);
    printf("\nEnter %d elements:\n",m*n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("Rows & Cols of Matrix B:\n");
    scanf("%d%d",&m,&n);
    printf("\nEnter %d elements:\n",m*n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }
    printf("Matrix Addition:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
    printf("Matrix Subtraction:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
    getch();
}
