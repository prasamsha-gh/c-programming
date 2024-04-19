#include<stdio.h>

int main(){
	int islowercasevowel,isuppercasevowel;
	char letter;
	printf("enter character:\n");
	scanf("%c",&letter);
	
	//return true is sth is available
	islowercasevowel = (letter=='a'|| letter=='e'|| letter=='i'|| letter=='o'|| letter=='u');
	isuppercasevowel = (letter=='A'|| letter=='E'|| letter=='I'|| letter=='0'|| letter=='U');
	
	if(islowercasevowel || isuppercasevowel){
		printf("%c is vowel.",letter);
	}else{
		printf("%c isnt vowel.",letter);
	}
	
	return 0;
}
