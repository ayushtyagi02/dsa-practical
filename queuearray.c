#include<stdio.h>
#include<stdlib.h>

typedef struct Queue{
   int f,r,size;
   int*arr[];
}Q;
int isempty(Q*q){
   if(q->f==q->r){
     return 1;
   }
   return 0;
}
int isfull(Q*q){
   if(q->r==q->size-1){
     return 1;
   }
   return 0;
}
void enqueue(Q*q,int data){
   if(isfull(q)){
       printf("queue is full\n");

   }
   else{
   q->r++;
   q->arr[q->r]=data;
   printf("The eleement inserted is %d\n",data);}
   
}
void dequeue(Q*q){
if(isempty(q)){
   printf("Your queue is empty");

}
   int a;
   q->f++;
   a=q->arr[q->f];
   printf("the element dequeued is %d\n",a);
   

}
int main(){
   Q q;
   q.f=q.r=-1;
   q.size=10;
   q.arr[q.size]=(int*)malloc(sizeof(int));
   enqueue(&q,5);
   enqueue(&q,4);
   enqueue(&q,3);
   enqueue(&q,25);
   enqueue(&q,44);
   enqueue(&q,32);
   enqueue(&q,31);
   enqueue(&q,30);
   enqueue(&q,22);
   enqueue(&q,59);
   enqueue(&q,41);
   enqueue(&q,36);
   enqueue(&q,39);
   enqueue(&q,24);
   
   
   //dequeue(&q);
   //dequeue(&q);
  // dequeue(&q);
   //dequeue(&q);
   

}
