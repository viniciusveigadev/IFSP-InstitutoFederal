#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float peso, alt, imc;
	
	printf("Digite seu peso: ");
	scanf ("%f", &peso);
	
	printf("Digite sua altura: ");
	scanf ("%f", &alt);
	
	imc = peso/(alt*alt);
	printf ("IMC: %f", imc);
	
	if (imc<17)
		printf ("\nVoce esta abaixo do peso ideal");
	else if (imc>=17 && imc<=18.49)
		printf ("\nabaixo do peso");
	else if (imc>=18.50 && imc<= 24.99)
		printf("\nParabens! Voce esta em seu peso normal!");
	else if (imc>=25 && imc<=29.99)
		printf ("\nVoce esta acima do seu peso (sobrepeso)");
	else if (imc>=30.0 && imc<= 34.99)
		printf("\nObesidade grau 1");
	else if (imc>=35.5 && imc<= 39.99)
		printf("\nObesidae grau 2");
	else if (imc>=40.0)
		printf("\nObesidade grau 3");
	
	
	return 0;
}
