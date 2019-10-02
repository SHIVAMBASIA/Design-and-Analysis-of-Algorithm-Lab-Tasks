#include<stdio.h>
void add(int *a,int l,int h,int *s)
{
       
        int s1=0,s2=0;
        if(l==h)
        *s=a[l];
        else if((h-l)==a[h]-a[l])
        {
        *s=*s+(a[h]*((a[h]+1))/2)-((a[l]*(a[l]-1))/2);
        }
        else
        {
        int mid=(l+h)/2;
        add(a,l,mid,&s1);
        add(a,mid+1,h,&s2);
        *s=s1+s2;
 }   
}
void main()
{
int i,a[40],n;
int s=0;
printf("enter the no. of elements");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
add(a,0,n-1,&s);
printf("sum is %d",s);
}
