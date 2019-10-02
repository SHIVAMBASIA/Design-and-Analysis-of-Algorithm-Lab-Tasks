struct ac
{
int et;
int st;
};
void main()
{
        struct ac *a[20];
        int n;
        printf("enter the value of n");
        scanf("%d",&n);
        printf("enter the starting time");
        for(int i=0;i<n;i++)
        {
        a[i]=(struct ac*)malloc(sizeof(struct ac));   
        scanf("%d",&a[i]->st);   
        }
        printf("enter the ending time:");
        for(int j=0;j<n;j++)
        {
        a[i]=(struct ac*)malloc(sizeof(struct ac));   
        scanf("%d",&a[i]->et);   
        }
        int t=activity(a,n);
        printf("maximum no.of activities is %d",t);
}
int activity(struct ac *a[],int n)
{
int count=0;
heapsort(a,n)
count=1;
int ch=0;
for(int i=1;i<n;i++)
{
if((a[ch]->et)<=(a[i]->st))
{
ch=i;
count++;
}
}
return count;
}
void swap(struct ac *a,struct ac *b)
{
        struct ac *temp;
        temp=*a;
        *a=*b;
        *b=temp;
}
void heapify(struct ac *a[],int n,int i)
{
        int l=2*i+1;
        int r=2*i+2;
        int big=i;
        if(l<n && (a[lc]->e)>(a[lc]->big))
        {
        big=l;
        }
        if(r<n && (a[rc]->e)>(a[rc]->big))
        {
         big=r;
        }
        if(i!=big)
        {
        struct ac *temp;
        temp=a[i];
        a[i]=a[big];
        a[big]=temp;
        heapify(ac,n,big);
        }
}
void buildheap(struct ac *a[],int n)
{
        for(int i=((n/2)-1);i>=0;i--)
{
        heapify(a,n,i);
}
}
void heapsort(struct ac *a[],int n)
{
        buildheap(a,n);
        for(int i=(n-1);i>=0;i--)
        {
        swap(&a[0],&a[i]);
        heapify(a,i,0);
        }
}
