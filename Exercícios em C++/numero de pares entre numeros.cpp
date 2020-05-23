#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int i;
	int contador = 0;
	for (i = 150; i <201; i = i +2){
		contador++;	
	}
	printf ("O numero eh de %d pares que existem entre 150 a 200", contador);
	
	return 0;
}
