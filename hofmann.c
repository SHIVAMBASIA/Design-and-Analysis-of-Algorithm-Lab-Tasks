#include<stdio.h>
/*struct node
{
char c[20];
}*/
void join(int a[],int n,int i,int j)
{
        int w=0;
        while(a[i]>=0)
        {
        i=a[i];
        }        
        while(a[j]>=0)
        {
        j=a[j];
        }
        w=a[i]+a[j];
        if(a[i]>a[j])
        {
        a[i]=j;
        a[j]=w;
        }
        else
        {
        a[j]=i;
        a[i]=w;
        }
}
int cfind(int a[],int n,int i)
{
        int p;
        int r=i;
        while(a[r]>0)
        {
        r=a[r];
        }
        p=a[i];
        while(p!=r)
        {
        a[i]=r;
        i=p;
        p=a[i];
        }
}
void main()
{
int a[20];
for(int i=0;i<10;i++)
{
        a[i]=-1;
}
join(a,10,0,2);
join(a,10,3,4);
join(a,10,4,5);
join(a,10,8,9);
join(a,10,2,9);
for(int i=0;i<10;i++)
{
        printf("\n%d",a[i]);
}
}
