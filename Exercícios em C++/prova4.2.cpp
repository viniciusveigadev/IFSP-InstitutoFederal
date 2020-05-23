#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i, n;
	int vet [5];
	
	printf ("Insira pos valores no vetor: \n");
	for (i=0; i<5; i++){
		scanf ("%d", &vet[i]);
	}
	
	printf ("Impressão do resultado: \n");
	for (i=5-1; i >=0; i--){
		printf ("%.d", vet[i]);
	}
	return 0;
}
