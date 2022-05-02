#include<stdio.h>
#include<string.h>

// To calculate nth fibonacci number, the relation is F(n) = F(n-2) + F(n-1).

 int fibo(int n){
   if(n<=1)
      return n ;
  else
  return fibo(n-1)+fibo(n-2) ;
 }


int main(){
int n ;
int i;
 printf("enter n ") ;
 scanf("%d",&n) ;
      for(i=0;i<=n;i++)
      printf("%d ",fibo(i)) ;

}
