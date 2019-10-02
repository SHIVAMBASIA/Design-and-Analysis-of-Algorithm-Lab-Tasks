#include<stdio.h>
void swap(int *a,int l,int k,int h)
{
        
}
void merge(int *a,int l,int h)
{
        int mid;
        if(l<h)
        {
        mid=(l+h)/2;
        merge(a,l,mid);
        merge(a,mid+1,h);
        swap(a,l,h);
}
}
void main()
{
        int i,n,a[40];
        printf("enter the no. of elements in the array");
        scanf("%d",&n);
        printf("enter the elements");
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        merge(a,0,n-1);
        for(i=0;i<n;i++)
        printf("%d",a[i]);
}
