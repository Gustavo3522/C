#include <stdio.h>

int main(){
    float lado1 ,  lado2 , lado3;
    
    printf("Informe o lado 1: ");
    scanf("%f", &lado1);
    
    printf("Informe o lado 2: ");
    scanf("%f", &lado2);
    
    printf("Informe o lado 3: ");
    scanf("%f", &lado3);
    
    if ((lado1 + lado2 > lado3  ) && (lado2 + lado3 > lado1) && (lado3 + lado1 > lado2))  {
    	printf("O triangulo e valido\n");
	
	
	if (lado1 == lado2 && lado2 == lado3) {
		printf("Equilatero\n");
	}else if (lado1 == lado2 || lado2 = lado3 || lado3 == lado1) {
		printf("isosceles\n");
	} else  {
		printf ("escaleno\n");
	}else {
		printf("Invalido\n");
	} 
    
    return 0;
    
}
