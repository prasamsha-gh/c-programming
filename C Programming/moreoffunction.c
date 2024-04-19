/*

*/

#include<stdio.h>
int add(int a, int b);
int sub(int a, int b);

int main(){
	int fn,sn;
	printf("enter first number:\n");
	scanf("%d",&fn);
	printf("enter second number:\n");
	scanf("%d",&sn);
	
	printf("the sum is %d\n",add(fn,sn));
	printf("the sub is %d\n",sub(fn,sn));
	printf("the square of 12 is %d",getsquare(12));
	return 0;
}

int add(int a, int b){
int sum=a+b;
return sum;	
}

int sub(int a, int b){
	int sub=a-b;
	return sub;
}

int getsquare(int num){
	return num*num;
}
