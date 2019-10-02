#include<stdio.h>
#include<stdlib.h>
struct node
{
        int nn;
        int w;
        struct node *next;
};
struct node1
{
        int s;
        int d;
        int w;
};
struct pr
{
        int comp;
        int wt;
        int p;
        int index;
};
void swap(struct node1 *s1,int i,int big)
{
       struct node1 *temp;
        temp=*a;
        *a=*b;
        *b=temp;
}
void heapify(struct node1 pr[],int ar[],int i)
{
        int l=2*i;
        int r=2*i+1;
        int big=i;
        if(l<n && (pr[l].w)>(pr[big].w))
        {
        big=l;
        }
        if(r<n && (pr[r].w)>(pr[big].w))
        {
         big=r;
        }
        if(i!=big)
        {
        swap(&pr[i],&pr[big]);
        pr[a[i]].index=i;
        pr[a[big]].index=big;
        heapify(a,arr,big);
        }
}
void buildheap(struct node1 *s1,int n)
{
        for(int i=(n/2)-1;i>=0;i--)
{
        heapify(s1,n,i);
}
}
/*int find(struct node1 *s1,int i)
{
        int p;
        int r=i;
        while(s1[r]>0)
        {
                r=s1[r];
        }
        p=s1[i];
        while(p!=r)
        {
                s1[i]->w=r;
                i=p;
                p=s1[i]->w;
        }
}*/
int extractmin(struct node1 pr[],int ar[],int hts)
{
        int root=ar[0];
        ar[0]=ar[hts];
        hts--;
        heapify(ar,0,hts);
        return root;
}
void decpr(int ar[],int t);)
{
        int ii=ar[t];
        int data=pr[a[t]].wt;
        i=3;
        j=(i-1)/2;
        while(i>0)
        {
        if((pr[ar[j]].wt)>data)
        {
                ar[i]=ar[j];
                pr[ar[i]].index=i;
                i=j;
                j=(i-1)/2;
        }
        }
        ar[i]=ii;
        pr[ii].index=i;
}
void prims(struct node1 pr[],int ar,int n)
{
        struct node1 *ptr=a[i];
        u=0;
        pr[u].w=0;
        buildheap(pr,n);
        hts=n;
        while(hts>0)
        {
        int u=extractmin(pr,ar,n);
        for(int j=0;j<n;j++)
        {
                  if((pr[v].comp==0) && ((ptr->wt)<(pr[ptr->data].wt)))
                        {
                                pr[ptr->data].wt=ptr->wt;
                                pr[ptr->data].p=u;
                                decpr(a,pr[ptr->data].index);
                                ptr=ptr->next;
                        }
        }
        }
}
void main()
{
        struct node *p[20];
        struct node *start=NULL;
        struct node1 *s1[20];
        int n,c;
        float size;
        printf("enter the no.of nodes");
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
                p[i]=(struct node *)malloc(sizeof(struct node));
                p[i]->nn=i;
                p[i]->w=0;
                start=p[i];
                printf("enter the no. of consecutive nodes:");
                scanf("%d",&c);
                for(int i=0;i<c;i++)
                {
                        struct node *temp;
                        temp=(struct node*)malloc(n*sizeof(struct node));
                        printf("enter the value of consecutive nodes of %d",i);
                        scanf("%d",&temp->nn);
                        scanf("%d",&temp->w);
                        count++;
                        start->next=temp;
                        temp->next=NULL;
                        start=temp;                     
                  }
              }
                size=(count)/2;
                struct node1 *s1[size];
                for(int i=0;<n;i++)
                {
                struct node *temp1;
                temp1=p[i]->next;
                while(temp!=NULL)
                {
                if(i<temp->v)
                {
                s1[k]=(struct node1 *)malloc(sizeof(struct node1));
                s1[k]->s=i;
                s1[k]->d=temp->w;
                s1[k]->w=temp->w;
                k++;
                }
                temp=temp->next;
                }
                }
                }
                buildheap(s1,n);
                heapify(s1,n,i);
                join(s1,i,j);
                int x=find(s1,i);
                for(int i=0;i<n;i++)
               {
                struct node *t1;
                t1=p[i];
                while(t1->next!=NULL)
                {
                 printf("node number:%d",s[i]->s);
                 printf("->");
                 printf("node weight:%d",s[i]->d);
                 printf("->");
                 printf("node weight:%d",s[i]->w);
                 printf("->");
                 t1=t1->next;
                }    
          }      
          struct pr p1[nn];
          int ar[nn];
         for(int i=0;i<nn;i++)
         {
                p1[i].comp=0;
                p1[i].wt=9999;
                p1[i].p=-1;
               ar[i]=i;
        }
         prims(pr,ar,nn);
}
