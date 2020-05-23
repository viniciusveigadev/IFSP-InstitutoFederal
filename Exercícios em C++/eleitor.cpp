#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int idade;
	
	printf ("digite sua idade: ");
	scanf ("%d", &idade);
	
	if (idade<16){
		printf("Nao eleitor");
	} else if (idade>=18 && idade<=65){
		printf("Eleitor obrigatorio");
	}else if (idade>=16 && idade>65){
		printf("Eleitor Facultativo");
	}
	
	return 0;
}
