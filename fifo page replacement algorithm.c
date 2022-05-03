#include<stdio.h>

int main(){

  int frames[50],pages[50] ;
  int fn,pn,i,j,exist=0;
 int pos=0;
   printf("enter frames number \n") ;
   scanf("%d",&fn);
      printf("enter pages number \n") ;
   scanf("%d",&pn);
      printf("enter pages values \n") ;
        for(i=0;i<pn;i++)
        scanf("%d",&pages[i]);

        for(i=0;i<pn;i++){

               for(j=0;j<fn;j++){
                if(pages[i]==frames[j])
                  exist=1 ;
               }
                if(!exist){
                        if(pos>=fn)
                        pos=0;
                    frames[pos]=pages[i] ;
                    pos++ ;

                }
                   for(j=0;j<fn;j++)
        printf("%d ",frames[j]);
        printf("\n") ;
        }




}
