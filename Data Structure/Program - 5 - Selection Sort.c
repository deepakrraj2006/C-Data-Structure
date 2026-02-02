#include <stdio.h>
#include <conio.h>
void main() 
{
    int a[10],i,j,n,temp,min;
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
        min-i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }
    printf("The Selection Sorted Array:\n");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
    getch();
}