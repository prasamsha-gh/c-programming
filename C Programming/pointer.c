//pointer: it is a variable that contains address of other variable

#include<stdio.h>

int main(){
	
int a=10; //normal variable
int *p = &a; //pointer variable
int x;
x=*p;

printf("the value of a is %d\n",a);
printf("the value of p is %d\n",p);
printf("the value of x is %d\n",x);

	return 0;
}
