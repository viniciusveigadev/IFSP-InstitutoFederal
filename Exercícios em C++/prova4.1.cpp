#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int soma =0;
	int v[10];
	int i;
	
	for (i=0; i<10;i++){
		printf("ENtre com o elemento %i do vetor ",i+ 1);
		scanf ("%f",&v[i]);
	}
	
	
	for (i=0;i<10;i++){
		soma = soma + v[10];
		}
		
	printf ("\n O valor da soma foi : %.1d", soma);
	
	return 0;
}
