#include<stdio.h>

int main(){
   int arr[]={45,67,2,34,15,69};
    int i,j,key;
    for(i=1;i<6;i++){
      j=i-1;
      key=arr[i];
      while(j>=0 && arr[j]>key){
           arr[j+1]=arr[j];
           
           j--;
      }
      arr[j+1]=key;
      
          }
          printf("Your sorted array is--");
      for(int i=0;i<6;i++){
         printf("%d ",arr[i]);
      }
}
