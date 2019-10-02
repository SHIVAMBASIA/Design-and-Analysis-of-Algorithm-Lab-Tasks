#include<stdio.h>
void rs(int a[],int r1,int r2,int c1,int c2)
{
        if(!(r1==r2) && (c1==c2))
        {
        mid1=(r1+r2)/2;
        mid2=(c1+c2)/2;
        rs(a,r1,mid1,c1,mid2);
        rs(a,r1,mid1,mid2+1,c2);
        rs(a,mid1+1,r2,c1,mid2);
        rs(a,mid1+1,r2,mid2+1,c2);
        swap(a,r1,mid1,c1,mid2,mid1+1,r2,mid2+1,c2);
        swap(a,r,mid1,mid2+1,c2,mid1+1,r2,c1,mid2);
        }
        
        
        }


}
void swap(int a[],int i1,int i2,int i3,int i4,int i5,int i6,int i7,int i8)
{
int i=i1;
        for(i=i1;i<=i5;i++)
        {
        for(int j=i3;j<=i8;j++)
        {
        temp[i][j]=a[][]
        }       




}
