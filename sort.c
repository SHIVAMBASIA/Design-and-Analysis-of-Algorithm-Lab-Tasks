#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int *createdata(int num)
{
int i=0;
int *ptr;
ptr=(int *)malloc(sizeof(int)*num);
if(ptr!=NULL)
0{
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
void insertionsort(int arr[];int n)
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
void input()
{
int number;
printf("Enter the no of random elements you want");
scanf("%d",number);
int *data;
data=gendata(number);
}
void averagecase(int number)
{
clock_t t2;
t2=clock();
insertionsort(data,number);
t2=clock()-t2;
double time_taken2=((double)t2)/CLOCKS_PER_SEC;
printf("\nAverage case time complexity=%f seconds\n",time_taken2);
}
void bestcase(int number)
{insertionsort(data,number);
clock_t t3;
t3=clock();
insertionsort(data,number);
t3=clock()-t3;
double time_taken3=((double)t3)/CLOCKS_PER_SEC;
printf("\nBest case time complexity=%f seconds\n",time_taken3);
}
void worstcase(int number)
{insertionsort(data,number);
clock_t t5;
t5=clock();
insertiondescsort(data,number);
t5=clock()-t5;
double time_taken5=((double)t5)/CLOCKS_PER_SEC;
printf("\nWorst case time complexity= %f seconds\n",time_taken5);
}

int main()
{
int ch;
printf("MENU:\n0.Quit\n1.Generate n random numbers and store in an array\n2.Sort array in ascending order\n3.Sort array in descending order\n4.Average case time complexity\n5.Worst case time complexity\n6.Best case time complexity\nEnter your choice:");
do
{
scanf("%d",&ch);
switch(ch)
{
case 1:
int number;
printf("Enter the no of random elements you want");
scanf("%d",number);
int *data;
data=gendata(number);
break;
case 2:
insertionsort(data,number);
break;
case 3:
insertiondescsort(data,number);
break;
case 4:
averagecase(number);
break;
case 5:
worstcase(number);
break;
case 6:
bestcase(number);
break;
}while(ch!=0);
free(data);
return 0;
}

/*clock_t t1,t2,t3,t4,t5;
t1=clock();
int *data;
data=gendata(5000);
t1=clock()-t1;
double time_taken1=((double)t1)CLOCKS_PER_SEC;
printf("\nProgram took %f seconds to generate data\n",time_taken1);
t2=clock();
insertionsort(data,5000);
t2=clock()-t2;
double time_taken2=((double)t2)/CLOCKS_PER_SEC;
printf("\nProgram took %f seconds to sort initial data\n",time_taken2);
t3=clock();
insertionsort(data,5000);
t3=clock()-t3;
double time_taken3=((double)t3)/CLOCKS_PER_SEC;
printf("\nProgram took %f seconds to sort already sorted data\n",time_taken3);
t5=clock();
insertiondescsort(data,5000);
t5=clock()-t5;
double time_taken5=((double)t5)/CLOCKS_PER_SEC;
printf("\nProgram took %f seconds to sort ascending sorted data in descending order\n",time_taken5);
t4=clock();
free(data);
t4=clock()-t4;
double time_taken4=((double)t4)/CLOCKS_PER_SEC;
printf("\nProgram took %f seconds to free data\n",time_taken4);
return 0;
}/*

