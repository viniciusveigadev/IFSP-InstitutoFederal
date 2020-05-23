#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void imprimir3 (){
	printf("3 \n");
}

void imprimir2 (){
	imprimir3();
	printf("2 \n");
}

void imprimir1 (){
	printf("1 \n");
}

int main(int argc, char** argv) {
	
	imprimir1();
	imprimir2();
	return 0;
}
