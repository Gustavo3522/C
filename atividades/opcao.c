#include<stdio.h>

int main() {
    int opcao, num, quadrado, num2, cubo;
    char mensagem[100];
    printf(" [1] Exibir mensagem ->");
    printf(" [2] Calcular quadrado de um numero ->");
    printf(" [3] Calcular cubo de um numero ->");
    printf(" Qual sua opcao ? ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1 :
        printf("Qual mensagem voce quer exibir ? ");
        scanf(" %[^\n]s", mensagem);  
        printf("%s\n", mensagem);
        break;

    case 2: 
        printf("Qual numero vc quer saber o quadrado? ");
        scanf("%d", &num);
        quadrado = num * num;
        printf("O quadrado de %d e: %d\n", num, quadrado);
        break;

    case 3:
        printf("Qual numero vc quer saber o cubo? ");
        scanf("%d", &num2);
        cubo = (num2 * num2) * num2 ;
        printf("O cubo de %d e: %d\n", num2, cubo);
        break;


    
    default:
        printf("Opcao invalida");
        break;
    }
    return 0;
}
