#include<stdio.h>
void store(int n, int m, int l[], int sorted_order[]){
     int i,j=0;
     for(i=0;i<n;i++){
          printf("append program %d to permutation for tape %d\n",l[sorted_order[i]],j+1);
          j=(j+1)%m;
     }
}
int main(){
     int n=13;
     int m=3;
     int l[13]={12,5,8,32,7,5,18,26,4,3,11,10,6};
     int sorted_order[13]={9,8,1,5,12,4,2,11,10,0,6,7,3};
     store(13,3,l,sorted_order);
}
