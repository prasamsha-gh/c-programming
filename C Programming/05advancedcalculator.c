#include<stdio.h>
int main(){
	//our first calculator in c
	
	//declaring variable
	int firstnumber,secondnumber,add,sub,mul,div,mod;
	
	//getting user input
	printf("enter first number:\n");
	scanf("%d",&firstnumber);
	printf("enter second number:\n");
	scanf("%d",&secondnumber);
	//calculating
	add=firstnumber+secondnumber;
	sub=firstnumber-secondnumber;
	mul=firstnumber*secondnumber;
	div=firstnumber/secondnumber;
	mod=firstnumber%secondnumber;
	
	//printing
	printf("The sum is %d\n",add);
	printf("The sub is %d\n",sub);
	printf("The mul is %d\n",mul);
	printf("The div is %d\n",div);
	printf("The mod is %d\n",mod);
	return 0;
}
