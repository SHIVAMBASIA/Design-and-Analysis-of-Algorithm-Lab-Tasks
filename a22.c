#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node *next;
}*start,*end,*temp;
struct node* part(struct node *s,struct node *e)
{
        struct node *temp;
        int pos;
        temp=s;
        struct node *e1;
        e1=end;
       struct node *pindex;
       pindex=start;
        while(temp!=end)
        {
                if((temp->data)<=(e1->data))
                {
                      t1->data=temp->data;
                      temp->data=pindex->data;
                      pindex->data=t1->data;
                      pindex=pindex->next;
                 }     
        }
        struct node *temp2,*temp3;
        temp3->data=temp2->data;
        temp2->data=end->data;
        end->data=temp3->data;
        return *(pindex);
}
void qs(struct node *start1,struct node *end)
{
        
        if((start->next)<(end->next))
        {
                struct node *p=part(start1,end);
                qs(start1,p);
                qs(p->next,end);
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
        qs(temp2,end);
        }
        }
}
