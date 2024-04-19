#include<stdio.h>

void sayhello();

int main(){
	int i;
	for(i=0;i<10;i++){
	sayhell0();
}
	return 0;
}

void sayhello(){
  static int num=1;
  printf("hello from numner %d\n",num);
  num++;	
}
