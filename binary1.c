#include<stdio.h>
#include<stdlib.h>
void binarys(int a[],int l,int h,int search)
{       
        int mid;                   
        if(l<h)
        {
        mid=(l+h)/2;
        if(a[mid]==search)
        {
        printf("found");
        return;
        }
        if(a[mid]<search)
        binarys(a,mid+1,h,search);
        if(a[mid]>search)
        binarys(a,l,mid,search);
        }
        else
        {
        printf("not found");
        }
}
void main()
{
        int a[20],n,search;
        for(int i=0;i<10;i++)
        a[i]=random()%10;
        for(int i=0;i<10;i++)
        printf("%d",a[i]);
        printf("enterno to search");
        scanf("%d",&search);
        binarys(a,0,9,search);
}
