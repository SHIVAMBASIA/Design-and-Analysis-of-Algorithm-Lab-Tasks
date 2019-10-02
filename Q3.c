#include<stdio.h>
#include<stdlib.h>
void binarys(int a[],int l,int h)
{       
        int mid;                   
        if(l<h)
        {
        mid=(l+h)/2;
        if(a[mid]>=a[mid+1]&&a[mid]>=a[mid-1])
        {
        printf("%d",a[mid])
        return;
        }
        if(a[mid]<a[mid+1])
        binarys(a,mid+1,h);
        else    
        {
         binarys(a,l,mid);
        }
        }                
}     
void main()
{
        int a[20],n,search;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        binarys(a,0,n-1,search);
        return 0;
}
        
