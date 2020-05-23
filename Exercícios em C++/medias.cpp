#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	int numero,n1,n2,media;
	
	numero = 1;
	
	while (numero >= 1) {
		
		printf ("Digite a primeira nota: ");
	scanf ("%d", &n1);
	
		printf ("Dgite a segunda nota: ");
	scanf ("%d", &n2);
		media = (n1+n2/2);
		printf ("A media desse aluno eh: %d \n ", &media);
		
		printf("Para continuar digite: 1, para sair digite: 0. ");
	scanf ("%d",&numero);
	
	}
	

	
	
	return 0;
}
