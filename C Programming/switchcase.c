/*
syntax:
    switch(which one to switch){
    statements
    }
*/


#include<stdio.h>

int main(){
	int number;
	printf("enter number:");
	scanf("%d",&number);
	
	//check the number using switch case
	switch(number){
		case 1:
			printf("day is sunday");
			break;
			
				case 2:
			printf("day is monday");
			break;
			
				case 3:
			printf("day is tuesday");
			break;
			
				case 4:
			printf("day is wednesday");
			break;
			
				case 5:
			printf("day is thursday");
			break;
			
				case 6:
			printf("day is friday");
			break;
			
				case 7:
			printf("day is saturday");
			break;
			
			default:
				printf("invalid option");
	}
	return 0;
}
