//recursion: call to same function
//0!=1
//1!=1*0!=1
//2!=2*1!=2
//5!=5*4*3*2*1

#include<stdio.h>

int main(){
	int nums=5;
	printf("the factorial is %d\n",factorial(nums));
	return 0;
}

int factorial(int num){
	if(num==1){
		return 1;
	}
	return(num*factorial(num-1));
}
