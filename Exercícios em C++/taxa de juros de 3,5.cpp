#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float aplic, reajust;
	int meses, total;
	
	
	printf ("Valor a ser aplicado: ");
	scanf ("%f", &aplic);
	
	printf ("Deseja fazer a aplicação em quantos meses: ");
	scanf ("%d", &meses);
	
	reajust  = (aplic*3.5/100);
	
	total = (reajust*meses+aplic);
	
	printf ("O total do valor aplicado com juros mensal de 3.5 na quantidade de meses escolhido eh de: %d ", total);
	
	
	
	
	return 0;
}
