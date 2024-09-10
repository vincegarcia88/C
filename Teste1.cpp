
#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int num1;
	
	printf("Informe um numero: ");
	scanf("%d", &num1);
	
	if (num1 % 3 == 0)
		printf("O numero %d e multiplo de 3.", num1);
	
	else
		printf("Nao e multiplo de 3.");
		
}

