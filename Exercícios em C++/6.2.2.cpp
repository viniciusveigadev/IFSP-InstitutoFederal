#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int contador = 0;
	int numero=0;
	int maior = -111111;
	int menor = 999999;
	
	while (numero>=0){
		
		printf("Digite um numero: ");
		scanf ("%d", &numero);
		
		if (maior<numero)
			maior = numero;
		if (menor> numero)
			menor = numero;
	}
		printf("O menor valor eh: %d \n", menor);
		printf("O maior valor eh: %d \n", maior);
	
	return 0;
}
