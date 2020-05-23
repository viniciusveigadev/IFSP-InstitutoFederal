#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	int i, vetor[100];
	
	for (i=0; i<11; i++){
		printf ("Digite um numero: ");
		scanf ("%d", &vetor[i]);
	}
	
	if (vetor[10]<0){
		printf("O valor armazenado no vetor de numero 10 eh negativo \n");
	}
	else if (vetor[10]>0){
		printf("O valor armazenado no vetor de numero 10 eh positivo \n");
	}
	else {
		printf("O valor armazenado no vetor de numero 10 eh ZERO \n");
	}
	
		if (vetor[10]%2==0){
		printf("O valor armazenado no vetor de numero 10 eh par \n");
	}
		else {
			printf("O valor armazenado no vetor de numero 10 eh impar \n");
		}
	return 0;
}
