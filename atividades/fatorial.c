#include<stdio.h>

int main() {
    int num, fatorial = 1;

    printf("Digite um numero para ver seu fatorial: ");
    scanf("%d", &num);

        // Loop para calcular e mostrar o processo do fatorial
        while (num > 1) {
            printf("%d * ", num);
            fatorial *= num;
            num--;
        }

        // Exibir o último número da multiplicação (1)
        printf("1 = %d\n", fatorial);
    

    return 0;
}
