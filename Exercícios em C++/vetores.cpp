#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int array [8];
	int cont;
	int contOcorrencias =0;
	
	for (cont=0; cont<8;cont++) {
		printf("digite o elemento [%d] \n", cont);
		scanf ("%d", &array);
		
	}
	
	int n;
	printf("digite o valor de n ");
		scanf ("%d", &n);
		
		for (cont=0; cont<8;cont++) {
		if (n==array[cont])
		contOcorrencias++;
	}
	
		printf("Existem %d ocorrencias de %d no vetor", contOcorrencias, n);	
	return 0;
}
