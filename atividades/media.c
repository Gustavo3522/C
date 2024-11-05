#include<stdio.h>

int main() {

    float n1, n2, n3, media, exameFinal;

    printf("Informe sua nota 1: ");
    scanf("%f", &n1);

    printf("Informe sua nota 2: ");
    scanf("%f", &n2);

    printf("Informe sua nota 3: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("Sua media e: %.2f\n", media);

    if ( media >= 7.00 && media <= 10.00) {
        printf("Você foi Aprovado!");
    } else if ( media >= 3.00 && media <= 6.99) {
        printf("Voce está de Exame Final!\n");
        exameFinal = 12.00 - media;
        printf("Voce precisa tirar %.2f para ser Aprovado!");
    } else if ( media >= 0.00 && media <= 2.99) {
        printf("Você está Reprovado!");
    }

    return 0;
}
