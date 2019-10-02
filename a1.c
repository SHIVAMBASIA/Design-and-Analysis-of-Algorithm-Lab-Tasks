#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
void main()
{
        struct timeval t1,t2;
        int i,j,s,n,k,temp,t;
        long int b;
        int *a;
        for(n=10000;n<=50000;n+=10000)
        {
        s=0;
        a=(int*)malloc(n*sizeof(int));
        for(k=0;k<5;k++)
        {
        for(i=0;i<n;i++)
        {
        a[i]=random();
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
        s+=b;
        printf("%d\n",k);
        }
        printf("%ld\n",b);
        double avg=s/5.0;
        printf("%f\n",avg);       
        }
        }
