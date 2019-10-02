#include<stdio.h>
#include<stdlib.h>
int part(int *a,int l,int h)
{
        int i,u;
        int pindex,pos;
        int pivot;
        pos=l+(random()%(h-l+1));
        int temp=a[h];
        a[h]=a[pos];
        a[pos]=temp;
        pindex=l,u=h;
        pivot=a[l];
        while(1)
        {
        while(a[pindex]<=pivot && pindex<h)
        pindex++;
        while(a[u]>pivot)
        u--;
        if(pindex<u)
        {
                temp=a[pindex];
                a[pindex]=a[u];
                a[u]=temp;
        }
        else
        {
                temp=a[u];
                a[u]=a[l];
                a[l]=temp;
        }
        
        return u;
}
}
void qs(int *a,int l,int h)
{
        
        if(l<h)
        {
                int pindex=part(a,l,h);
                qs(a,l,(pindex-1));
                qs(a,(pindex+1),h);
        }
}

void main()
{
        int i;
        int a[]={1,4,3,7,5,2};
        qs(a,0,5);
        for(i=0;i<6;i++)
        {
        printf("%d",a[i]);
        }
}
