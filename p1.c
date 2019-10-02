#include<stdio.h>
#include<stdlib.h>
int binarys(int a[],int l,int h,int search)
{       
        int mid;                   
        if(l<h)
        {
        mid=(l+h)/2;
        if(a[mid]==search)
        return mid;
        if(a[mid]<search)
        binarys(a,mid+1,h,search);
        if(a[mid]>search)
        binarys(a,l,mid-1,search);
        }
        else
        {
        printf("not found");
        }
}

/*int part(int a[],int l,int h)
{
        int i,n,pivot,pindex;
        pivot=a[h];
        pindex=a[l];
        for(int i=0;i<=(n-2);i++)
        {
        if(a[i]<=pivot)
        {
        int temp=a[i];
        a[i]=a[pindex];
        a[pindex]=a[i];
        pindex=pindex+1;
        }
        }
        int temp2=a[pivot];
        a[pivot]=a[pindex];
        a[pindex]=temp2;
        return pindex;
}
void qs(int a[],int l,int h)
{
        int pindex;
        pindex=part(a,l,h);
        qs(a,l,pindex-1);
        qs(a,pindex+1,h);
}*/
void main()
{
        int a[20],i,n,search1,search2;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        //qs(a,0,9);
        printf("enter 1st data to search");
        scanf("%d",&search1);   
        int b1=binarys(a,0,n-1,search1);
        printf("enter 2nd data to search");
        scanf("%d",&search2);
        int b2=binarys(a,0,n-1,search2);
        printf("%d",(b2-b1));
}







