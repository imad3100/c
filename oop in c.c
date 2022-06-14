typedef struct Person{
  char name[10] ;
  char* (*get_name)() ;
  } Person ;
  char* get_name(Person *p){

       return p->name ;
  }



int main(){
       Person p1 ;
        p1.get_name=&get_name ;
     printf("enter name \n") ;
     scanf("%s",p1.name) ;
     printf("your name : %s",p1.get_name(&p1)) ;


}
