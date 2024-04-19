//ternary operator

/*
syntax:
   stat if true : stat if false
*/


#include<stdio.h>

int main(){
	int age;
	printf("enter your age:");
	scanf("%d",&age);
	
	age>20 ? printf("you are a voter.") : printf("you arent a voter.");
	
	return 0;
}
