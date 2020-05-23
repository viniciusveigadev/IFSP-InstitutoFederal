#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	

	int horas, valorh, horasx, sal, extra,total;
	
	printf ("Horas trabalhadas no mes: ");
	scanf ("%d", &horas);
	
	printf ("Valor pago por hora: ");
	scanf ("%d", &valorh);
	
	printf ("Numero de horas extras trabalhadas: ");
	scanf ("%d", &horasx );
	
	sal = (valorh * horas );
	extra = (horasx*valorh*2);
	total = (sal + extra);
	printf ("Salario sem contabilizar os itens abaixo R$: %d \n", sal);
	printf ("Valor total de horas extra no mes: %d \n", extra);
	printf ("Salario bruto total: %d \n", total);
	

	return 0;
}
