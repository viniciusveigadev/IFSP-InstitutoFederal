#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float AreaTriangulo ( float x,float y){
	float result;
	result = (x*y)/2;
	
	return result;
}

int main(int argc, char** argv) {
	
	float base, altura, area;
	
	printf("Digite a base: ");
	scanf ("%f", &base);
	printf ("Digite a altura: ");
	scanf ("%f", &altura);
	
	area = AreaTriangulo (base, altura);
	printf("A area vale> %f", area);
	
	
	return 0;
}
