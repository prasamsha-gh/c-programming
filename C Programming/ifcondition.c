/*
if condition: it tells the program to perform certain task only.

syntax: if(condition)
           statement;
*/

#include<stdio.h>

int main(){
	int age;
	printf("enter your age:");
	scanf("%d",&age);
	if(age>20){
	printf("you are a voter.");
}else{
	printf("you arent a voter.");
}
	return 0;
}
