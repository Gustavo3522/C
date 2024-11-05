#include <stdio.h>

struct Funcionario {
    char nome[30];
    float valor_vendas[3];
};

float Pontos(struct Funcionario funcionario) {
    float soma = 0;
    float pontos;

    for (int i = 0; i < 3; i++) {
        soma += funcionario.valor_vendas[i];
    }

    pontos = soma / 1000;
    return pontos;
}

int main() {
    struct Funcionario funcionario[2];

    for (int i = 0; i < 2; i++) {
        printf("Nome do funcionario (%d): \n", i + 1);
        fgets(funcionario[i].nome, 30, stdin);

        for (int j = 0; j < 3; j++) {
            printf("Valor das vendas do mes (%d): ", j + 1);
            scanf("%f", &funcionario[i].valor_vendas[j]);
        }
        getchar(); // Limpa o buffer para evitar problemas com fgets
    }

    for (int i = 0; i < 2; i++) {
        float pontos = Pontos(funcionario[i]);
        printf("Pontuacao do funcionario: %s %.2f pontos\n", funcionario[i].nome, pontos);
    }

    return 0;
}
