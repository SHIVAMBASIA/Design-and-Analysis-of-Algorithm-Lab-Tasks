#include<stdio.h>
void binarys(int a[],int l,int h,int search)
{       
        int mid;                   
        if(l<h)
        {
        mid=(l+h)/2;
        if(a[mid]==search)
        {
        printf("found");
        }
        if(a[mid]<search)
        binarys(a,mid+1,h,search);
        if(a[mid]>search)
        binarys(a,l,mid,search);
}
}
void main()
{
        int a[20],n,search;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("enterno to search");
        scanf("%d",&search);
        binarys(a,0,n-1,search);
}
