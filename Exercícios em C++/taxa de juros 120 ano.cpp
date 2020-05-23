#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



	int main(int argc, char** argv) {
	
	float valor, juros1, juros, dias, ano, total;
	
	
	printf ("Valor a ser aplicado: ");
	scanf ("%f", &valor);
	
	printf ("Quantidade de dias que o valor ficara aplicado: ");
	scanf ("%f", &dias);
	
	ano = (360);
	
	juros = (valor*dias);
	juros1 = (juros/ano);
	
	total = (juros1+valor);

	
	printf ("O total do valor aplicado reajustado em cima da taxa de 120 porcento ao ano eh de: %f ", total);
	
	
	
	
	return 0;
}
