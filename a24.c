#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node *next;
}*start,*temp;
int part(int *a,int l,int h)
{
        int i;
        int pos;
        int pivot;
        pos=l+(random()%(h-l+1));
        int temp=a[l];
        a[l]=a[pos];
        a[pos]=temp;
        pivot=a[h];
       int pindex=l;
        for(i=l;i<h;i++)
        {
                if(a[i]<=pivot)
                {
                       temp=a[i];
                       a[i]=a[pindex];
                      a[pindex]=temp;
                      pindex=pindex+1;
                 }     
        }
        temp=a[pindex];
        a[pindex]=a[h];
        a[h]=temp;
        return pindex;
}
void qs(struct node *start1)
{
        struct node*start2;
        start2=start;
        if(start1->next!=NULL)
        {
                int pindex=part(start2);
                qs(start2);
                qs(a,(pindex+1),h);
                start1=start1->next;
        }
}

void main()
{
        int i,c=0;
        struct node *temp2;
        temp2=start;
        temp=start;
        printf("enter the length of the linked list");
        scanf("%d",&n);
        scanf("%d",&temp->data);
        while(c<n)
        {
        t=temp->next;
        while(t->next!=NULL)
        {
        scanf("%d",temp->data);
        temp=temp->next;
        c++;
        }
        }
        qs(temp2);
        }
        }
}
