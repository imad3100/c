#include<stdio.h>
#include<stdlib.h>
 typedef struct node{
  int val ;
  struct node *next ;
 }node;
 node *head=NULL ;
 void add(int x){
        node *p=malloc(sizeof(node)) ;
         p->next=head;
         p->val=x;
         head=p ;

 }
 void print(){
      node*p=head ;
      while(p){
        printf("%d ",p->val) ;
        p=p->next ;
 }
  printf("\n") ;
 }
 void reverse(){
 //Initialize three pointers prev as NULL, curr as head and next as NULL.
       node *p=NULL;
       node*c=head ;
       node *n ;
         while(c){
    // Before changing next of current, store next node 
             n=c->next ;
    // Now change next of current 
// This is where actual reversing happens
            c->next=p;
  // Move prev and curr one step forward 
             p=c;
             c=n;
         }
       head =p;

 }

int main(){
    int i,n=5 ;

 for(i=0;i<n;i++)
    add(i) ;
    print() ;
    reverse() ;
 print() ;
}
