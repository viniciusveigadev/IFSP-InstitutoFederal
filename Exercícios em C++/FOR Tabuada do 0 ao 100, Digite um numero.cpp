#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int num, contador;
		printf ("Digite um numero: ");
		scanf ("%d", &num);
	for (contador = 0; contador <101;contador++){
	
		printf("%d x %d = %d \n",contador, num, contador*num);
	}
	
	

		

	
	return 0;
}
