#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float n1,n2,n3,n4, media, numero;
	
	numero = 1;
	
	while (numero ==1);{
	
	printf("Digite a 1 nota:");
	scanf ("%f", &n1);
	printf("Digite a 2 nota:");
	scanf ("%f", &n2);
	printf("Digite a 3 nota:");
	scanf ("%f", &n3);
	printf("Digite a 4 nota:");
	scanf ("%f", &n4);
	
	media = (n1+n2+n3+n4/4);
	printf("A media eh: %f", &media);
	
	if (media<3){
		printf("Reprovado");
	}
	else if (media>=3 || media<7){
		printf("Prova final");
	}
		
		printf("Para continuar digite: 1, para sair digite: 0. ");
	scanf ("%d",&numero);
	
	}
	
//	printf("Digite a 1 nota:");
//	scanf ("%f", &n1);
//	printf("Digite a 2 nota:");
//	scanf ("%f", &n2);
//	printf("Digite a 3 nota:");
//	scanf ("%f", &n3);
//	printf("Digite a 4 nota:");
//	scanf ("%f", &n4);
//	
//	media = (n1+n2+n3+n4/4);
//	printf("A media eh: %f", &media)
//	
//	else if (media<3){
//		printf("Reprovado");
//	}
//	else if (media>=3 || media<7){
//		printf("Prova final");
//	}
//	else (media>=7)
//		printf("Aprovado");
	
	return 0;
}
