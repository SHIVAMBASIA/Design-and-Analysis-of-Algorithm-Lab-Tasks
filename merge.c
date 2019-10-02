
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int *a;
void generate(int *N){
        int i;
        printf("N=\t");
        scanf("%d",N);
        a=(int *)malloc(sizeof(int)*(*N));
        for(i=0;i<*N;i++){
                a[i]=rand()%400;
        }
}
void display(int n){
        int i;
        for(i=0;i<n;i++){
                printf("%d ",a[i]);                
        }
        printf("\n");
}
void merge(int a[],int l,int m,int r)
{
int i,j,k;
int n1=m-l+1;
int n2=r-m;
int L[n1],R[n2];
for(i=0;i<n1;i++)
L[i]=a[l+i];
for(j=0;j<n2;j++)
R[j]=a[m+1+j];
i=0;
j=0;
k=l;
while(i<n1 && j<n2)
{
if(L[i]<=R[j])
{
a[k]=L[i];
i++;
}
else
{a[k]=R[j];
j++;
}
k++;
}
while(j<n2)
{
a[k]=R[j];
j++;
k++;
}}
void mergeSort(int a[],int l,int r)
{
if(l<r)
{
int m=l+(r-l)/2;
mergeSort(a,l,m);
mergeSort(a,m+1,r);
merge(a,l,m,r);
}}
void mergedesc(int a[],int l,int m,int r)
{
int i,j,k;
int n1=m-l+1;
int n2=r-m;
int L[n1],R[n2];
for(i=0;i<n1;i++)
L[i]=a[l+i];
for(j=0;j<n2;j++)
R[j]=a[m+1+j];
i=0;
j=0;
k=l;
while(i<n1 && j<n2)
{
if(L[i]>=R[j])
{
a[k]=L[i];
i++;
}
else
{a[k]=R[j];
j++;
}
k++;
}
while(j<n2)
{
a[k]=R[j];
j++;
k++;
}}
void mergeSortdesc(int a[],int l,int r)
{
if(l<r)
{
int m=l+(r-l)/2;
mergeSortdesc(a,l,m);
mergeSortdesc(a,m+1,r);
mergedesc(a,l,m,r);
}}
void main(){
        int i,j,N,ch,M;
        printf("How many data?\t");
        scanf("%d",&M);
        double data[M][3];
        clock_t start_t,end_t;
        double total_t;
        for(i=0,ch=4;i<M;i++){
        //do{
               // printf("\nMENU:\n0.Quit\n1.Generate N random nos. & store in an array\n2.Sort Array in ascending order(small value of n)\n3.Sort Array in descending order(small value of n)\n4.Average case time complexity\n5.Worst case time complxity\n6.Best case time complexity\nEnter your choice--\t");
              //  scanf("%d",&ch);
              generate(&N);
                switch(ch){
                   case 1:
                        //generate(&N);
                        //display(N);
                        break;
                   case 2:
                        mergeSort(a,0,N-1);
                        display(N);
                        break;
                   case 3:     
                        mergeSortdesc(a,0,N-1);
                        display(N);
                        break;
                   case 4:
                        start_t=clock();
                        mergeSort(a,0,N-1);
                        end_t=clock();
                        total_t=(double)(end_t-start_t)/CLOCKS_PER_SEC;
                        //printf("Time Taken=\t %f",total_t);
                        data[i][0]=total_t;
                        //break;
                   case 5:
                        mergeSortdesc(a,0,N-1);
                        start_t=clock();
                        mergeSort(a,0,N-1);
                        end_t=clock();
                        total_t=(double)(end_t-start_t)/CLOCKS_PER_SEC;
                        //printf("Time Taken=\t %f",total_t);
                        data[i][1]=total_t;
                        //break;
                   case 6:
                        mergeSort(a,0,N-1);
                        start_t=clock();
                        mergeSort(a,0,N-1);
                        end_t=clock();
                        total_t=(double)(end_t-start_t)/CLOCKS_PER_SEC;
                        //printf("Time Taken=\t %f",total_t);
                        data[i][2]=total_t;                        
                        break;
                }
      //  }
      //  while(i<M);
        }
        printf("Average\t\tWorst\t\tBest\n");
        for(i=0;i<M;i++){
                for(j=0;j<3;j++){
                        printf("%f\t",data[i][j]);
                }
                printf("\n");
        }
        printf("\n");
}
