#include<stdio.h>
int main(){
	//our first calculator in c
	
	//declaring variable
	int firstnumber=100;
	int secondnumber=20;
	int add,sub,mul,div,mod;
	
	
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
