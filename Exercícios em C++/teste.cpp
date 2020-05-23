#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int num;

	do {
	
		printf("Digite um numero entre 1 e 4: ");
		scanf ("%d", &num);
		
	 if ((num<1) || (num>4))
		printf("Entrada invalida \n");
	else
		printf ("O numero digitado foi: %d \n", num);
		
} while (1==1);
		
		
		
	
	return 0;
}
