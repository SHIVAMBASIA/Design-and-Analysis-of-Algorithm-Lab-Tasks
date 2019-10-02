#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
void main()
{
       
        int a[100000];
        int i,n,j,temp,min;
        long int b;
        printf("enter size of the array");
        scanf("%d",&n);
        for(i=0;i<=n;i++)
        {
        printf("enter the values");
        scanf("%d",&a[i]);
        }
        min=a[0];
        for(i=1;i<n;i++)
        {
        if(a[i]<min)
        swap(a[i],min);
        }
        for(i=0;i<n;i++)
        {
        printf("%d",a[i]);
        }
        void swap(int x,int y)
        {
        temp=x;
        x=y;
        y=temp;
        }
        }
