#include<stdio.h>

int main(){
  
   int n,num,pos,l,r,mid;
   int arr[50];
   
 printf("enter the size of an array\n");
   scanf("%d",&n);
  
     printf("Enter your elements");
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
    printf("your elements are\n");
  for(int i=0;i<n;i++){
      printf("%d ",arr[i]);
  }
  printf("enter the element which you want to find \n");
  scanf("%d",&num);
  
  l=0;
  r=n-1;
  
  //printf("%d",mid); 
  while(l<=r){
   mid=(l+r)/2;//2
   if(arr[mid]==num)
      {
          printf("element found at %d ",mid+1);
          break;
      }
      if(arr[mid]<num){
          l=mid+1;
      }
      
      else{
          r=mid-1;
          mid=(l+r)/2;
      }
  }
      return 0;
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
 
