//C PROGRAM 4.3 

//write a program to cheak age is adult or not by using ternary operators


#include<stdio.h>

int main() 
{ 
    int age;
    printf("enter  age");
    scanf("%d",&age); 
     
    age>= 18 ? printf("adult") : printf("not adult");
  
   return 0;

}
