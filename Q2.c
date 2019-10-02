#include<stdio.h>
#include<stdlib.h>
void partition(int a[],int l,int u)
{
        while(l<u)
        {
                if(a[l]%2==0)
                {
                        if(a[l+1]%2==0)
                        {
                                if(a[u]%2!=0)
                                {
                                        int t=a[l];
                                        a[u]=a[l];
                                        a[l]=t;
                                 }
                                 else
                                 u--;
                         }
                 }
                         if(a[l]%2!=0)
                        {
                                if(a[l+1]%2!=0)
                                {
                                        if(a[u]%2==0)
                                        {
                                          int t=a[l];
                                          a[u]=a[l];
                                            a[l]=t;
                                        }
                                         else
                                         u--;
                                }
                        }
                        l++;
                 }
}                 
int main()
{
     int n,i;
     printf("enter array:\n");
     scanf("%d",&n);
     int a[n];
     printf("enter array elements:");
     for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     partition(a,0,n-1);
     for(i=0;i<n;i++)
     printf("%d",a[i]);
     return 0;
}
