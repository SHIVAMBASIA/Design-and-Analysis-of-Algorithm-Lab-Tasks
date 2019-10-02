#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int *createdata(int num)
{
int i=0;
int *ptr;
ptr=(int *)malloc(sizeof(int)*num);
if(ptr!=NULL)
{
for(i=0;i<num;i++)
{
ptr[i]=0.0;
}
}
return ptr;
}
int gendata(int num)
{
int *ptr=createdata(num);
int j=0;
if(ptr!=NULL)
{
for(j=0;j<num;j++)
{
ptr[j]=rand()%100;
}
}
return ptr;
}
void insertionsort(int arr[],int n)
{
int i,key,j;
for(i=1;i<n;i++)
{
key=arr[i];
j=i-1;
while(j>=0 && arr[j]>key)
{
arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=key;
}
}
void insertiondescsort(int arr[],int n)
{
int i,key,j;
for(i=1;i<n;i++)
{
key=arr[i];
j=i-1;
while(j>=0 && arr[j]<key)
{
arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=key;
}
}

void printarray(int arr[],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
}
int main()
{
clock_t t1,t2,t3,t4,t5;
t1=clock();
int *data;
data=gendata(35000);
t1=clock()-t1;
double time_taken1=((double)t1)/CLOCKS_PER_SEC;
printf("\nProgram took %f seconds to generate data\n",time_taken1);
t2=clock();
insertionsort(data,35000);
t2=clock()-t2;
double time_taken2=((double)t2)/CLOCKS_PER_SEC;
printf("\nProgram took %f seconds to sort initial data\n",time_taken2);
t3=clock();
insertionsort(data,35000);
t3=clock()-t3;
double time_taken3=((double)t3)/CLOCKS_PER_SEC;
printf("\nProgram took %f seconds to sort already sorted data\n",time_taken3);
t5=clock();
insertiondescsort(data,35000);
t5=clock()-t5;
double time_taken5=((double)t5)/CLOCKS_PER_SEC;
printf("\nProgram took %f seconds to sort ascending sorted data in descending order\n",time_taken5);
t4=clock();
free(data);
t4=clock()-t4;
double time_taken4=((double)t4)/CLOCKS_PER_SEC;
printf("\nProgram took %f seconds to free data\n",time_taken4);
return 0;
}

