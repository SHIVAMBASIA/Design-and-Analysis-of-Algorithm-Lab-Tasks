#include<stdio.h>
#include<stdlib.h>
struct node
{
int c;
int f;
struct node *l;
struct node *r;
};
void inorder(struct node *root)
{
while(root!=NULL)
{
inorder(root->l);
printf("%d\t\t%d",root->c,root->f);
inorder(root->r);
}
}
void insert(struct node *p,struct node *p4,int n)
{
        n++;
        int i=n-1;
        int j=(i/2)-1;
        while(p[j]->f<p4->f && i>0)
                {        
                               p[i]=p[j];
                                i=j;
                                j=(i/2)-1;
                }
        p[i]=p4;
}
void heapify(struct node *p[],int n,int i)
{
        int l=2*i+1;
        int r=2*i+2;
        int big=i;
        if(l<n && p[l]->f<p[big]->f)
        {
        big=l;
        }
        if(r<n && p[r]->f<p[big]->f)
        {
         big=r;
        }
        if(i!=big)
        {
        struct node *temp;
        temp=p[i];
        p[i]=p[big];
        p[big]=temp;
        heapify(p,n,big);
        }
}
struct node *extractmin(struct node *p[],int hts)
{
        struct node *temp=p[0];
        p[0]=p[hts-1];
        hts=(hts-1);
        heapify(p,hts,0);
        return temp;
}

void buildheap(struct node *p[],int n)
{
        for(int i=(n/2)-1;i>=0;i--)
{
        heapify(p,n,i);
}
}
void hoffmann(struct node *p[],int n)
{
        struct node *p1;
        struct node *p2;
        buildheap(p,n);  
        while(n>2)
        {
        p1=extractmin(p,n);
        n=n-1;
        p2=extractmin(p,n);
        //printf("%d",p1->f);
        //printf("%d",p2->f);
        struct node *p4=(struct node *)malloc(sizeof(struct node ));
        p4->l=p1;
        p4->r=p2;
        p->f=(p1->f+p2->f);
        p->c=-1;
        insert(p,p4,n);
        }
}
void main()
{
        int n;
        printf("enter the no.of elements");
        scanf("%d",&n);
        struct node *p[20];
        for(int i=0;i<n;i++)
        {
               p[i]=(struct node *)malloc(sizeof(struct node));
                printf("enter the character");
               scanf("%d",&p[i]->c); 
                printf("enter the frequency");
                scanf("%d",&p[i]->f);
                }
                printf("charater\t\tfreq");
            for(int i=0;i<n;i++)
        {
                
                printf("%d\t\t%d",p[i]->c,p[i]->f);
               
        }
        hoffmann(p,n);
        inorder(p[0]);
        
        /* for(int i=0;i<n;i++)
        {
                
                printf("\n%d\t\t%d",p[i]->c,p[i]->f);
               
        }  */
}
