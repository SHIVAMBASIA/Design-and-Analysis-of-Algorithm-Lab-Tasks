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
void swap(struct node1 *s1,int i,int big)
{
       struct node1 *temp;
        temp=*a;
        *a=*b;
        *b=temp;
}
void heapify(struct node1 *s1,int n,int i)
{
        int l=2*i+1;
        int r=2*i+2;
        int big=i;
        if(l<n && (s1[l]->w)>(s1[big]->w))
        {
        big=l;
        }
        if(r<n && (s1[r]->w)>(s1[big]->w))
        {
         big=r;
        }
        if(i!=big)
        {
        swap(&s1[i],&s1[big]);
        heapify(s1,n,big);
        }
}
void buildheap(struct node1 *s1,int n)
{
        for(int i=(n/2)-1;i>=0;i--)
{
        heapify(s1,n,i);
}
}
void join(struct node1 *s1,int i,int j)
{
        if(s1[i]->w<s1[j]->w)
        {       
                s1[i]=j;
                s1[j]=temp;
        }
        else
        {
                s[j]=i;
                s[i]=temp;
        }
}
int find(struct node1 *s1,int i)
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
                for(int i=0;<n;i++)
                {
                struct node1 *temp1;
                temp1=a[i]->next;
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
}
