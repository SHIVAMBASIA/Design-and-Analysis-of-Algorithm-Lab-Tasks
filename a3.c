#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
void main()
{
        struct timeval t1,t2;
        int a[100000];
        int i,n,j,temp;
        long int b;
        printf("enter size of the array");
        scanf("%d",&n);
        for(i=0;i<=n;i++)
        {
       a[i]=random();
        }
        gettimeofday(&t1,NULL);
        for(i=1;i<=n;i++)
        {
        temp=a[i];
        j=i-1;
        while(j>0&&a[j]<temp)
        {
        a[j+1]=temp;
        j--;
        }
        a[j+1]=temp;
        }
        gettimeofday(&t1,NULL);
        for(i=1;i<=n;i++)
        {
        temp=a[i];
        j=i-1;
        while(j>0&&a[j]>temp)
        {
        a[j+1]=temp;
        j--;
        }
        a[j+1]=temp;
        }
        gettimeofday(&t2,NULL);
         b=((t2.tv_sec-t1.tv_sec)*1000000l)+(t2.tv_usec-t1.tv_usec);
         printf("%ld",b);        
         }
