#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float sal_min, sal_us;
	int total;
	
	sal_min = (937);
	
	printf ("Digite em reais o valor do seu salario, sem necessidade dos centavos: " );
	scanf ("%f", &sal_us);
	
	total = (sal_us/sal_min);
	
	printf ("O resultado de quantos salarios minimos voce recebe, com base no salario minimo atual de R$937 reais eh de: %d ", total);
	
	
	return 0;
}
