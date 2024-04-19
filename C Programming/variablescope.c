#include<stdio.h>

void sayhello(char name[]);
int age=19;  //global scope

int main(){
	       //local scope
	printf("age is %d\n",age);
	sayhello("prasamsha");
	return 0;
}

void sayhello(char name[]){
  printf("hello %s",name);	
}
