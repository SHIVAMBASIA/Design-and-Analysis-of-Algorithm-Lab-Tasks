#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b)
{
        int temp;
        temp=*a;
        *a=*b;
        *b=temp;
}
void heapify(int arr[],int n,int i)
{
        int l=2*i;
        int r=2*i+1;
        int big=i;
        while(l<=n && arr[l]>arr[big])
        {
        big=l;
        }
        while(r<=n && arr[r]>arr[big])
        {
         big=r;
        }
        if(i!=big)
        {
        swap(&arr[i],&arr[big]);
        heapify(arr,n,big);
        }
}
void buildheap(int arr[],int n)
{
        int i=(n/2);
        while(i>0)
{
        heapify(arr,n,i);
}
}
void heapsort(int arr[],int n)
{
        buildheap(arr,n);
        while(n>0)
        {
        swap(&arr[1],&arr[n-1]);
        n--;
        heapify(arr,n,1);
        }
}
void insert(int arr[],int n,int data)
{
        int hts=n;
        hts++;
        int i=hts;
        int j=(hts/2);
        while((arr[j]<data)&&(i>1))
        {
        arr[i]=arr[j];
        i=j;
        j=i/2;
        }
        arr[i]=data;
        for(int j=0;j<hts;j++)
        {
        printf("%d",arr[j]);
        }
        
}
void delete(int arr[],int n,int k)
{
        int hts=n;
        arr[k]=arr[hts];
        hts--;
        if((arr[k]>arr[k/2])&&(k>1))
        {
        int i=k;
        int j=i/2;
        int data=arr[i];
        while((arr[j]<data)&&(i>1))
        {
        arr[i]=arr[j];
        i=j;
        j=i/2;
        }
        arr[i]=data;
        }
        else
                { 
        heapify(arr,n,k);
        }
        for(int j=0;j<hts;j++)
        {
        printf("%d",arr[j]);
        }
}
void main()
{
        int arr[20];
        int n,k;
        int hts=n;
        scanf("%d",&n);
        for(int j=0;j<n;j++)
        scanf("%d",&arr[j]);
        scanf("%d",&k);
        delete(arr,n,k);
        heapsort(arr,n);
        insert(arr,n,2);
        for(int j=0;j<n;j++)
        {
        printf("%d",arr[j]);
        }
}

