#include<stdio.h>
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
        int i=(n/2)-1;
        while(i>0)
{
        heapify(arr,n,i);
}
}
void main()
{
int arr[20];
int n;
scanf("%d",&n);
for(int j=1;j<n;j++)
scanf("%d",&arr[j]);
buildheap(arr,n-2);
for(int j=1;j<n;j++)
{
printf("%d",arr[j]);
}



}
