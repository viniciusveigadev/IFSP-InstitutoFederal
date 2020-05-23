#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float saldo, new_saldo;
	int total ;
	
	printf ("Digite seu saldo para aplicar: ");
	scanf ("%f", &saldo);
	
	 new_saldo = (saldo*2/100);
	
	 total = (new_saldo + saldo);
	
	printf ("O total da sua aplicacao com juros de 2 porcento ao mes em 30 dias eh: %d ", total);
	
	
	return 0;
}
