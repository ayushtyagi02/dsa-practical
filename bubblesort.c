#include<stdio.h>

void bubblesort(int arr[],int size){
      for(int i=0;i<size;i++){
         int k=i;
         for(int j=i+1;j<size;j++){
            if(arr[k]>arr[j]){
               int temp=arr[k];
               arr[k]=arr[j];
               arr[j]=temp;

            }
            k++;
         }
      }

}
int main(){
   int arr[]={3,1,7,5,9};
   int size=5;
   bubblesort(arr,size);
   for(int i=0;i<size;i++){
      printf("%d ",arr[i]);
   }
}
