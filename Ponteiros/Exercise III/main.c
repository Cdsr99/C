#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1 = 0;
	int *ponteiro = &n1;
	
	printf("\nPlease, enter with a number:\n");
	scanf("%d",&n1);
	
	if(*ponteiro % 2 == 0){
		printf("\nThis number is even\n");
	}else{
		printf("This number is odd");
	}
	
	
	
}


