#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int *l1 = 0;
	int *l2 = 0;
	int *l3 = 0;
	
	int chose = 0;
	
	
	do{
	menu:
	printf("\n Please, enter with the first side:\n");
	scanf("%d",&l1);
	printf("\n Please, enter with the second side:\n");
	scanf("%d",&l2);
	printf("\n Please, enter with the third side:\n");
	scanf("%d",&l3);
	
	if(l1 == l2 && l2 == l3){
		
		printf("\n This is a equilateral triangule\n");
		system("timeout /t 5");
		system("cls");		
		goto menu;
		
	}else if(l1 == l2 || l1 == l3 || l2 == l3){
		
		printf("\n This is a isoceles triangule\n");
		system("timeout /t 5");
		system("cls");
		goto menu;
		
	}else if(l1 != l2 && l2 != l3){
		
		printf("\nThis is not a triangule\n");
		system("timeout /t 5");
		system("cls");
		goto menu;
		
	}
	}while(chose == 1);

	

}
