#include<stdio.h>

void mergesort(int A[],int B[],int C[],int m,int n){
   int i,j,k;
   j=k=i=0;
   while(i<m && j<n){
      if(A[i]<B[j]){
        C[k]=A[i];
        i++;
        k++;

      }
      else{
         C[k]=B[j];
         j++;
         k++;

      }
   }
   while(i<m){
      C[k]=A[i];
      i++;
      k++;
   }
   while(j<n){
      C[k]=B[j];
      j++;
      k++;
   }

}
int main(){
   int m=5,n=5;
   int A[]={3,5,7,8,9};
   int B[]={1,4,6,12,13};
   int C[m+n];
   mergesort(A,B,C,m,n);
   for(int i=0;i<m+n;i++){
      printf("%d ",C[i]);
   }
   return 0;
}
