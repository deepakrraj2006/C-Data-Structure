//------Matrix------//
#include(stdio.h)
void main()
{
    int a[10][10], n, i ,j;
    clrscr();
    printf("Array Size,\n")
    scanf("%d",&n);
    printf("Matrix");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d", a[i][j]);
            scanf("%d",&a[i][j]);
        }
    }
    getch();
}