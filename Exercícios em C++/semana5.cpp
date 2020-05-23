#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	void imprimeNumero (int numero){
		printf("O numero digitado foi: %d", numero);
	}

int main(int argc, char** argv) {
	int n;
	
	printf ("Digite um numero: ");
	scanf ("%d", &n);
	
	imprimeNumero (n);
	
	return 0;
}
