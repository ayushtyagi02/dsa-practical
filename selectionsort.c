#include<stdio.h>
int size=6;
void insertionsort(int arr[]){
     for(int i=0; i<size-1;i++){
      int minI=i;
   
      for(int j=i+1;j<size;j++){
          if(arr[j]<arr[minI]){
             minI=j;
          }

      }
      int temp=arr[i];
      arr[i]=arr[minI];
      arr[minI]=temp;
      }
     
     }
void traverse(int arr[]){
   for(int i=0;i<size;i++){
      printf("%d ",arr[i]);
   }
}
int main(){
          //  0 1 2 3 4 6
   int arr[]={5,11,9,64,22,57};
   insertionsort(arr);
traverse(arr);

}
