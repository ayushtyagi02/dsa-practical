#include<stdio.h>
#include<stdlib.h>

typedef struct Queue{
   int data;
   struct Queue *next;
}Q;
 Q *head=NULL;
   Q* rear=NULL;
void enqueue(int val)
{
   Q *ptr=(Q*)malloc(sizeof(Q));
   ptr->data=val;
   ptr->next=NULL;
   if(head==NULL && rear==NULL)
   { head=ptr;
      rear=ptr;
  }
  else{
   rear->next=ptr;
   rear=ptr;
  }
  

}
void dequeue(){
   Q*temp=head;
   head=temp->next;
   free(temp);
}
void traverse(){
   Q*temp=head;

   while(temp!=NULL){
      printf("%d\n",temp->data);
      temp=temp->next;
      

   }
}

  
int main(){
   
   enqueue(5);
   enqueue(6);
      enqueue(7);

   enqueue(9);

   traverse(head);
   dequeue();
   traverse(head);
   
}
