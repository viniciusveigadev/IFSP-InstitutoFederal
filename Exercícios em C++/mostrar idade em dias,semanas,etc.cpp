#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int ano_nas, atual, idade, meses, dias, semanas;
	
	printf ("Digite seu ano de nascimento: ");
	scanf ("%d", &ano_nas);
	atual = (2017);
	
	idade = (atual- ano_nas);
	printf ("Your age: %d \n", idade );
	
	meses = (idade*12);
	printf ("Sua idade em meses: %d \n", meses);
	
	dias = (meses*30);
	printf ("Sua idade em dias: %d \n", dias);
	
	semanas = (dias*7);
	printf ("Sua idade em semanas: %d \n", semanas);
	
	return 0;
}
