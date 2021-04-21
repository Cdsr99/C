#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int num1 = 0;
	int num2 = 0;
	
	int *p1 = &num1;
	int *p2 = &num2;
	
	
	printf("Please, insert a number that is bigger than 1:");
	scanf("%d",&num1);
	
	printf("Please, insert another number:");
	scanf("%d",&num2);
	
	
	if(num2 > num1){
		printf("Erro, the first number should be bigger than the second one! Try again");
		printf("");
		
	}else if(num2 < num1){
		
		while(num2 <= num1){
			printf("%d\n",*p2);
			num2++;
			
		}
		
	}
	
	
	
	
	
	return 0;
}
