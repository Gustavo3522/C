#include <stdio.h>

int main(){
    float num1, num2 , num3;
    
    printf("Informe o primeiro numero: ");
    scanf("%f", &num1);
    
    printf("Informe o segundo numero: ");
    scanf("%f", &num2);
    
    printf("Informe o terceiro numero: ");
    scanf("%f", &num3);
    
    if (num1 > num2 && num1 > num3) {
    	printf("O numero maior e: %.2f\n", num1);
	}else if (num2 > num1 && num2 > num3) {
    	printf("O numero maior e: %.2f\n", num2);
	}else if (num3 > num1 && num3 > num2) {
    	printf("O numero maior e: %.2f\n", num3);
	}
    
    return 0;
}

