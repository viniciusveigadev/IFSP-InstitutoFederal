#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int hora, minutos, total;
	
	printf ("Informe a hora: ");
	scanf ("%d", &hora);
	
	total = (hora*60);
	
	printf ("Desde o inicio do dia ja se passaram um total de: %.d minutos", total);
	

	return 0;
}


