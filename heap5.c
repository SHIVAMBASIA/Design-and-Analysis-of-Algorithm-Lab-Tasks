#include<stdio.h>
void swap(int *a,int *b)
{
        int temp;
        temp=*a;
        *a=*b;
        *b=temp;
}
void heapify(int arr[],int n,int i)
{
        int l=2*i;
        int r=2*i+1;
        int big=i;
        while(l<=n && arr[l]>arr[big])
        {
        big=l;
        }
        while(r<=n && arr[r]>arr[big])
        {
         big=r;
        }
        if(i!=big)
        {
        swap(&arr[i],&arr[big]);
        heapify(arr,n,big);
        }
}
void merge(int arr[],int i1,int i2,int j1,int j2)
{
        while(int i<i2 && int j<j2)
        {
        if(arr[i]<arr[j])
        {
        int b[k]=arr[i];
        i++;
        k++;
        }
        }
        while(int i<i2)
        {
        int b[k]=arr[i];
        i++;
        k++;
        }
        while(int j<j2)
        {
        int b[k]=arr[j];
        j++;
        k++;
        }

}
void buildheap(int arr[],int l,int h)
{
        if((h-l)>2)
        {
        int mid=(l+h)/2;
        buildheap(arr,0,mid);
        buildheap(arr,mid+1,h);
        merge(arr,0,mid,mid+1,h);
        }
        if((h-l)==2)
        {
        heapify(arr,n,l,h);
        heapsort(arr,n);
        }
}
void heapsort(int arr[],int n)
{
        buildheap(arr,0,n-1);
        while(n>0)
        {
        swap(&arr[1],&arr[n-1]);
        n--;
        heapify(arr,n,1);
        }
}
/*void sortd(int arr[],int n,int k)
{
int r,mid;
int c=0;                                                                                                                           
if(r==k)
heapsort(arr,k);
if(r>k)
{
        while(mid>=r)
        {
        int mid=(0+n)/2;
        c++;
        }
        int i=c;
        while(i>0)
        {
        heapsort(arr,r);
        i--;
        }
}
        for(int j=0;j<n;j++)
        {
        printf("%d",arr[j]);
        }
}*/
/*void insert(int arr[],int n,int data)
{
        int hts=n;
        hts++;
        int i=hts;
        int j=(hts/2);
        while((arr[j]<data)&&(i>1))
        {
        arr[i]=arr[j];
        i=j;
        j=i/2;
        }
        arr[i]=data;
        for(int j=0;j<hts;j++)
        {
        printf("%d",arr[j]);
        }
        
}*/
/*void delete(int arr[],int n,int k)
{
        int hts=n;
        arr[k]=arr[hts];
        hts--;
        if((arr[k]>arr[k/2])&&(k>1))
        {
        int i=k;
        int j=i/2;
        int data=arr[i];
        while((arr[j]<data)&&(i>1))
        {
        arr[i]=arr[j];
        i=j;
        j=i/2;
        }
        arr[i]=data;
        }
        else
        {
        heapify(arr,n,k);
        }
        for(int j=0;j<hts;j++)
        {
        printf("%d",arr[j]);
        }
}*/
void main()
{
        int arr[20];
        int n,k;
        int hts=n;
        scanf("%d",&n);
        for(int j=0;j<n;j++)
        scanf("%d",&arr[j]);
        scanf("%d",&k);
        sortd(arr,n,k);
        /*scanf("%d",&k);
        delete(arr,n,k);*/
        //heapsort(arr,n);
        //insert(arr,n,2);
        /*for(int j=0;j<n;j++)
        {
        printf("%d",arr[j]);
        }*/
}
