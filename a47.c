#include<stdio.h>
struct point
{
        int x;
        int y;
}a[1000];
void main()
{
        int a[40][40];
        printf("enter the no.of rows");
        scanf("%d",&m);
        printf("enter the no. of columns");
        scanf("%d",&n);
        printf("enter the elements");
        for(i=0;i<m;i++)
        {
        for(j=0;j<n;j++)
        {
        scanf("%d",&a[i][j]);
        }
        }
        for(k=0;k<n/2;k++)
        for(i=0;i<2;i++)
        {
        for(j=0;j<2;j++)
        {
        s=s+a[i][j];
}
}
