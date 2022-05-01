#include<stdio.h>
#include<string.h>
/*
pick any character in the string;
to it, append separately all permutations of the remaining characters in the string;
do this for all possible choices in step 1.
*/
void swap(char *x, char *y)
{
  char temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

 void permut(char *a,int l,int r){
      if(l==r)
     printf("%s\n",a) ;
     for(int i=l;i<=r;i++){
        swap(a+l,a+i) ;
       permut(a,l+1,r);
        swap(a+l,a+i) ;
     }

 }

int main(){

char a[10]="abc";
int n=strlen(a) ;
 permut(a,0,n-1) ;

}
