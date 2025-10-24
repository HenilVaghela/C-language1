//C-PROGRAM

//write a program to cheak age is adult or teenager or child


#include<stdio.h>

int main()
{
int age;
printf("enter age");
scanf("%d",&age);

if(age>18){
printf("adult\n");

}else if(age>13 && age<=18){
printf("teenager\n");

}else{
printf("child");
}

return 0;

}
