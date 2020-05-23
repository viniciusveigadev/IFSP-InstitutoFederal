#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float	valorQualquer;
	float v[10];
	int i;
	for (i=0; i<10;i++){
		printf("ENtre com o elemento %i do vetor ",i+ 1);
		scanf ("%f",&v[i]);
	}
	
	valorQualquer = v[0];
	for (i=0;i<10;i++){
		if (v[i] > valorQualquer){
			valorQualquer = v[i];
		}
		
	printf ("\n O valor encontrado acima foi : %.1f", valorQualquer);
	}
	
	return 0;
}
