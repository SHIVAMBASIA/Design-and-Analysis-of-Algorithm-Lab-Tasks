#include<stdio.h>
void minmax(int a[],int l,int h,int *min,int *max);
void main()
{
        int n,i,a[40],min=0,max=0;
        printf("enter the no. of elememts in the array");
        scanf("%d",&n); 
        printf("enter the elements");
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        minmax(a,0,n-1,&min,&max);
        printf("min is %d",&min);
        printf("max is %d",&max);
}
minmax(int a[],int l,int h,int *min,int *max)
{
        int min1=0,min2=0,max1=0,max2=0;
        if(l==h)
        *min=*max=a[l];
else
{
        mid=(l+h)/2;
        minmax(a,l,mid,&min1,&max1);
        minmax(a,mid+1,h,&min2,&max2);
        *min=(min1<min2)?min1:min2;
        *max=(max1>max2)?max1:max2;
}
}
