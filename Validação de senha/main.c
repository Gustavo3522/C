#include <stdio.h>

int main() {
    char senha[50];
    int tentativas = 0, maxTentativas = 3;

    printf("A senha deve ter pelo menos 8 caracteres, incluindo letras maiusculas, minusculas, numeros e caracteres especiais.\n");

    while (tentativas < maxTentativas) {
        int tamanho = 0, temMaiuscula = 0, temMinuscula = 0, temNumero = 0, temEspecial = 0;

        // Solicita a senha do usuário
        printf("\n Insira sua senha: ");
        scanf("%s", senha);

        // Verifica a senha caractere por caractere
        while (senha[tamanho] != '\0') {
            // Verifica se o caractere é uma letra maiúscula (A-Z)
            if (senha[tamanho] >= 'A' && senha[tamanho] <= 'Z') {
                temMaiuscula = 1;
            }
            // Verifica se o caractere é uma letra minúscula (a-z)
            else if (senha[tamanho] >= 'a' && senha[tamanho] <= 'z') {
                temMinuscula = 1;
            }
            // Verifica se o caractere é um número (0-9)
            else if (senha[tamanho] >= '0' && senha[tamanho] <= '9') {
                temNumero = 1;
            }
            // Se não for número nem letra, consideramos como caractere especial
            else {
                temEspecial = 1;
            }

            tamanho++;
        }

        // Verifica se a senha atende aos critérios
        if (tamanho >= 8 && temMaiuscula && temMinuscula && temNumero && temEspecial) {
            printf("Senha forte! Acesso garantido.\n");
            break;  // Sai do loop se a senha for forte
        } else {
            printf("Senha fraca! Verifique os criterios e tente novamente.\n");
        }

        tentativas++;  // Incrementa a tentativa
    }

    if (tentativas == maxTentativas) {
        printf("\nNumero maximo de tentativas atingido. Acesso negado.\n");
    }

    return 0;
}
