#include <iostream>

//******************************************************
//Instituto Federal de São Paulo - Campus Sertãozinho
//Disciplina......: M2LPBA
//Programação de Computadores e Dispositivos Móveis
//Aluno: Vinícius de Lima Veiga 
//******************************************************

int main(int argc, char** argv) {
	
	int i, vetor[5];
	int soma=0;
	int multi=1;
	
	//Requisitando valores dos estudantes e armazenando no vetor
	
	for (i=0;i<5;i++){
	   	printf ("Informe um valor inteiro para a posicao %d: ", i);
		scanf ("%d", &vetor[i]);
	}
	
	//Operação de soma de todos os valores que foram inseridos no vetor
	
	for (i=0;i<5;i++){
		soma = soma + vetor[i];
	}
		printf("O valor da soma eh: %d \n", soma);
	if (soma>0){
		printf("O valor da soma eh Positivo\n");
	}
	if (soma<0){
		printf("O valor da soma eh Negativo\n"); 
	}
	if (soma==0){
		printf("O valor da soma eh ZERO\n");
	}	
	
	//Operação de Multiplicacao de todos os valores que foram inseridos no vetor
	
	for (i=0;i<5;i++){
		multi = multi * vetor[i];
	}
		printf("O valor da Multiplicacao eh: %d \n", multi);
	if (multi>0){
		printf("O valor da Multiplicacao eh Positivo\n");
	}	
	if (multi<0){
		printf("O valor da Multiplicacao eh Negativo\n"); 
	} 	
	if (multi==0){
		printf("O valor da Multiplicacao eh ZERO\n");
	}
	//Como no enunciado não foi dito oque fazer quando o valor final for ZERO,\
	 complementei o codigo com uma alteração que acredito não afetar o resultado do que foi proposto, espero estar correto! 
	
	return 0;
}
