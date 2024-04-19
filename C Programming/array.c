/*
array: it can store multiple value of same type in same variable.

*/

#include<stdio.h>

int main(){
	int i;
	int n=5;
	float price[n];
	for (i=0;i<n;i++){
		printf("enter the price for %d:\n",i+1);
		scanf("%d",&price[i]);
	}
		for (int i=0;i<n;i++){
		printf("price %d is %f",i+1,price[i]);
	
	return 0;
}
