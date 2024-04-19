//if else if else

/*

syntax:
      if(condition){
      statement;
  }else if(condition){
  statement;
}else if(condition){
statement;
}else{
statement;
}

*/

#include<stdio.h>

int main(){
	int num1=200,num2=30,num3=40;
	if(num1>num2&&num1>num3){
		printf("num1 is greater than num2 and num3");
	}else if(num2>num1&&num2>num3){
		printf("num2 is greater than num1 and num3");
	}else{
		printf("num3 is greater than num1 and num2");
	}
	
	return 0;
}
