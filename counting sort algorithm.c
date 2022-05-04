#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*
 1) Take a count array to store the count of each unique object.

  2) Modify the count array such that each element at each index 
  stores the sum of previous counts. 

The modified count array indicates the position of each object in 
the output sequence.
*/


int range(int arr[],int n){
 int k=arr[0] ;
 int i ;
      for(i=0;i<n;i++)
       if(arr[i]>k)
        k=arr[i] ;
       return k ;
}

 int * count_sort(int arr[],int n){
  int m=range(arr,n) ;
   int count[m];
   int *result =malloc(sizeof(int)*n) ;
   int i,k=0;
         for(i=0;i<=m;i++)
            count[i]=0 ;
     
              for(i=0;i<n;i++)
                   count[arr[i]]++ ;

           for(i=1;i<=m;i++)
           count[i]=count[i]+count[i-1] ;

                   for(i=0;i<n;i++){
                     result[count[arr[i]]-1]=arr[i] ;
                     count[arr[i]]-- ;
                   }
                   return result ;

   }



int main(){
  int n;
  int m;
  int i;
  printf("enter n \n") ;
  scanf("%d",&n) ;
  int arr[n] ;
  printf("enter array elements \n") ;
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]) ;
 int *b=count_sort(arr,n) ;
 printf("result \n") ;
  for(i=0;i<n;i++)
    printf("%d ",b[i]) ;

}
