
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
void sortasse(int n){
     int i,j,p;     
     for(i=1;i<n;i++){
        p=a[i];
        j=i-1;
        while(j>=0){
               if(a[j]>p){
                a[j+1]=a[j];
                j--;
               }
               else
                break;
        }
        a[j+1]=p;
     }   
}      
void sortdesc(int n){
     int i,j,p;     
     for(i=1;i<n;i++){
        p=a[i];
        j=i-1;
        while(j>=0){
               if(a[j]<p){
                a[j+1]=a[j];
                j--;
               }
               else
                break;
        }
        a[j+1]=p;
     }   
}
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
                        sortasse(N);
                        display(N);
                        break;
                   case 3:     
                        sortdesc(N);
                        display(N);
                        break;
                   case 4:
                        start_t=clock();
                        sortasse(N);
                        end_t=clock();
                        total_t=(double)(end_t-start_t)/CLOCKS_PER_SEC;
                        //printf("Time Taken=\t %f",total_t);
                        data[i][0]=total_t;
                        //break;
                   case 5:
                        sortdesc(N);
                        start_t=clock();
                        sortasse(N);
                        end_t=clock();
                        total_t=(double)(end_t-start_t)/CLOCKS_PER_SEC;
                        //printf("Time Taken=\t %f",total_t);
                        data[i][1]=total_t;
                        //break;
                   case 6:
                        sortasse(N);
                        start_t=clock();
                        sortasse(N);
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
