#include<stdio.h>
void swap(int *a,int *b)
{
        int temp;
        temp=*a;
        *a=*b;
        *b=temp;
}
void heapify(int a[],int n,int i)
{
        int l=2*i+1;
        int r=2*i+2;
        int big=i;
        if(l<n && a[l]>a[big])
        {
        big=l;
        }
        if(r<n && a[r]>a[big])
        {
         big=r;
        }
        if(i!=big)
        {
        swap(&a[i],&a[big]);
        heapify(a,n,big);
        }
}
void buildheap(int a[],int n)
{
        for(int i=(n/2)-1;i>=0;i--)
{
        heapify(a,n,i);
}
}
void heapsort(int a[],int n)
{
        buildheap(a,n);
        for(int i=(n-1);i>=0;i--)
        {
        swap(&a[0],&a[i]);
        heapify(a,i,0);
        }
}
void main()
{
int n;
printf("Enter no. of elements:");
scanf("%d",&n);
int a[20];
int j;
for(j=0;j<n;j++)
scanf("%d",&a[j]);
heapsort(a,n);
for(int j=0;j<n;j++)
printf("%d",a[j]);
}
