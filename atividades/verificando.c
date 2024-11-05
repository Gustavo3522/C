#include <stdio.h>

int main(){
	
	int num1;
	
	printf("Informe o numero: ");
	scanf("%d", &num1);
	
	if (num1 > 0)	{
		printf("Positivo");
	}else if (num1 < 0 ) {
		printf("Negativo");
	}else if ( num1 == 0) {
		printf("igual a zero");
	}
	
		
	
	
	return 0;
}
