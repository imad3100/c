#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*
Create an array arr3[] of size n1 + n2.
Simultaneously traverse arr1[] and arr2[]. 
Pick smaller of current elements in arr1[] and arr2[], 
copy this smaller element to next position in arr3[] and move ahead in arr3[] and the array whose element is picked.
If there are remaining elements in arr1[] or arr2[], copy them also in arr3[].

*/

 int *merge_arr(int arr1[],int arr2[],int size1,int size2 ){
     int size3=size1+size2 ;
  int *arr3=malloc(sizeof(int)*size3) ;
  int i=0,j=0,k=0 ;

  while(i<size1 && j<size2){
     if(arr1[i]< arr2[j]){
      arr3[k]=arr1[i] ;
      i++;
  }
      else{
        arr3[k]=arr2[j] ;
        j++ ;
      }
      k++;
  }

    while(i<size1){
        arr3[k]=arr1[i] ;
        i++ ;
        k++;
    }
    while(j<size2){
        arr3[k]=arr2[j] ;
        j++;
        k++;
    }

    return arr3 ;
 }

int main(){
    int a[]={1,5,16,41,50} ;
    int b[]={2,7,12,32,62} ;
    int n1=sizeof(a)/sizeof(int) ;
    int n2=sizeof(b)/sizeof(int) ;
    int i ;
    
   int *c=merge_arr(a,b,n1,n2) ;

      for(i=0;i<n1+n2;i++)
        printf("%d ",c[i]) ;
}
