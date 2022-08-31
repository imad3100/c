#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main(){

 int h,m,s;
 printf("enter time h m s\n") ;
 scanf("%d %d %d",&h,&m,&s) ;

  while(1){

    if(h==12){
       h=0 ;
       s=0;
       m=0 ;
    }
    else if(m==60){
        m=0 ;
        h++ ;
    }
    else if(s==60){
        s=0 ;
        m++ ;
    }
    s++ ;
    printf("%d : %d : %d",h,m,s) ;
    Sleep(10) ;
    system("cls") ;
  }

}
