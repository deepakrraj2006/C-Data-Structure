#include <stdio.h>
#include <conio.h>
void main() 
{
    int a[10],i,j,n,x;
    clrscr();
    printf("Limit of the array\n");
    scanf("%d",&n);
    printf("Elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        x=a[i];
        j=i-1;
        while(j>=0&&a[j]>x)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
    printf("The Insertion Sorted Array:\n");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
    getch();
}