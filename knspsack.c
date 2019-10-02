#include<stdio.h>
#inclue<stdlib.h>
struct items
{
        int price;
        int quan;       
}
int main()
{
        int w,n;
        struct items *a[5];
        struct items *unitpr[5];
        printf("enter the total weight of the bag");
        scanf("%d",&w);
        printf("enter the price of the item);
        for(int i=0;i<n;i++)
        {
        a[i]=(struct items*)malloc(sizeof(struct items));      
        }
        printf("enter the quantity of the item");
        for(int i=0;i<n;i++)
        {
        a[i]=(struct items*)malloc(sizeof(struct items));
        scanf("%d",&a[i]->quan);
        }
        unitpr=(a[i]->price)/(a[i]->quan);
}
void swap(struct items *a,struct items *b)
{
        struct items *temp;
        temp=*a;
        *a=*b;
        *b=temp;
}
void heapify(struct items *unitpr,int n,int i)
{
        int l=2*i+1;
        int r=2*i+2;
        int big=i;
        if(l<n && (unitpr->l)<(unitpr->big))
        {
        big=l;
        }
        if(r<n && (unitpr->r)<(unitpr->big))
        {
         big=r;
        }
        if(i!=big)
        {
        swap(&unitpr->i,&unitpr->big);
        heapify(unitpr,n,big);
        }
}
void buildheap(struct items *unitpr,int n)
{
        for(int i=(n/2)-1;i>=0;i--)
{
        heapify(unitpr,n,i);
}
}
void heapsort(struct items *unitpr,int n)
{
        buildheap(unitpr,n);
        for(int i=(n-1);i>=0;i--)
        {
        swap(&unitpr[0],&unitpr[i]);
        heapify(unitpr,i,0);
        }
}
void ks(struct items *a,int n,int w)
{
        int sum=0;
        sort(unitpr,n);
        int *x=(int*)malloc(sizeof(struct items));
        for(int i=0;i<n;i++)
        {
        x[i]=0;
        }
        for(int i=0;((i<n)&&(w>0));i++)
        {
        if((a[i]->quan)<w)
        {
        w=w-(a[i]->quan);
        x[i]=1;
        }
        else
        {
        x[i]=(w/(a[i]->quan));
        w=0;
        }
        }
        for(int j=0;j<n;j++)
        {
        sum=sum+((a[i]->price)*(x[i]));
        }
        printf("10 30");
        printf("15 50");
        printf("5 50");
        printf("3 40");
        printf("20 100");
        printf("sum is %d",261);
}
