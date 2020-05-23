#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n;
	int x;
	
	printf ("Digite o valor de n: ");
	scanf ("%d", &n);
	
	printf ("Digite o valor de x: ");
	scanf ("%d", &x);
	
	if (n==x) {
		printf("os numeros possuem o mesmo valor");
	}
	else if (n>x) {
		printf ("%d %d", x,n);	
	}else {
		printf ("%d %d", n,x);
	}
	
	return 0;
}
