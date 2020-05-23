#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float saldo, new_saldo, saldo_fin, total;
	
	printf ("Digite seu saldo para aplicar: ");
	scanf ("%f", &saldo);
	
	new_saldo = (saldo*2/100);
	
	saldo_fin = (new_saldo*30);
	
	total = (saldo_fin + saldo);
	
	printf ("O total da sua aplicação com juros de 2% ao mês em 30 dias  eh: %f ", total);
	
	
	return 0;
}
